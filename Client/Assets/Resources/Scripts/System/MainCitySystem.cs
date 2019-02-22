/****************************************************
    文件：MainCitySystem.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/2/13 15:22:7
	功能：主城业务逻辑
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;


public class MainCitySystem : SystemRoot<MainCitySystem> 
{
    public UIMainCityWindow MainCityWindow;
    public UIInfoWindow UIInfoWindow;
    public UIDialogWindow UIDialogWindow;
    private PlayerController playerController;
    private Transform CharShowcam;
    private AutoGuideConfigures autoGuide;
    private Transform[] npcsPosArray;
    private NavMeshAgent NavMesh;
    private bool m_IsNavTask;
    
    public bool IsNavTask
    {
        get
        {
            return m_IsNavTask;
        }

        set
        {
            m_IsNavTask = value;
            if(value == false)
            {
                NavMesh.isStopped = true;
                NavMesh.enabled = false;
                playerController.SetBlend(Consts.IdleBlend);
            }

        }
    }

    public override void Init()
    {
        //需要调用父类的初始化方法完成一些写在父类中的逻辑
        base.Init();
        Common.Log("初始化主城");


    }

    public void EnterMainCity()
    {

        MainCityWindow.SetWindowState(false);
        //获取地图配置文件
        var mapConfigure = resourceService.GetConfigures(Consts.S_MainCitySceneID);

        //主城的场景在资源中, 调用资源服务器.
        // 传入主城的场景名称, 以及主城加载完成之后的任务回调
        resourceService.AsyncLoadScene(mapConfigure.sceneName, ()=>{

            Common.Log("进入主城");
            //当场景加载完成后, 显示主城的UI页面
            MainCityWindow.SetWindowState();

            //播放主城的背景音乐
            audioService.PlayBGMusic(Consts.A_BGMCity, true);
            //角色的初始化导入
            LoadPrefab(mapConfigure);

            //进入主城时, 获取到各个NPC的位置
            var mapRoot = GameObject.FindGameObjectWithTag("MainCityMap").GetComponent<CityMap>();

            npcsPosArray = mapRoot.NPCPosArray;

            //获取导航组件
            NavMesh = playerController.gameObject.GetComponent<NavMeshAgent>();

            //TODO设置人物相机 
            if(CharShowcam != null) CharShowcam.gameObject.SetActive(false);
         
        });
    }

    void LoadPrefab(MapConfigures map)
    {
            GameObject player = resourceService.GetPlayer(Consts.PlayerInCity, true);
            player.transform.position = map.playerBornPos;
            player.transform.eulerAngles = map.playerBornRot;
            player.transform.localScale = new Vector3(1.4f, 1.4f, 1.4f);

            playerController = player.GetComponent<PlayerController>();
            playerController.InitCharator();



            Camera.main.transform.transform.position = map.mainCamPos;
            Camera.main.transform.transform.localEulerAngles = map.mainCamRot;
            
    }

    public void MoveCharator(Vector2 direction)
    {
        StopNav();
        if (direction == Vector2.zero)
        {
            playerController.SetBlend(Consts.IdleBlend);
        }
        else
        {
            playerController.SetBlend(Consts.WalkBlend);
        }
        playerController.Direction = direction;
    }

    public void ShowInfoWindow()
    {
        StopNav();
        if (CharShowcam == null)
        {
            CharShowcam = GameObject.FindGameObjectWithTag("CharCam").transform;
            
        }
        //相对于角色的位置
        CharShowcam.localPosition = playerController.transform.position + 3.0f * playerController.transform.forward + new Vector3(0, 1.2f,0);
        CharShowcam.localEulerAngles = new Vector3(0, 180 + playerController.transform.eulerAngles.y, 0);
        CharShowcam.localScale = Vector3.one;
        CharShowcam.gameObject.SetActive(true);
        UIInfoWindow.ShowInfoWindow();
        audioService.PlayEffect(Consts.A_UIOpenPage);
    }

    public void HideInfowWindow()
    {
        CharShowcam.gameObject.SetActive(false);
    }

    #region 拖拽旋转角色
    private float startRotate = 0;

    public void SetStartRotate()
    {
        startRotate = playerController.transform.localEulerAngles.y;
    }
    public void RotatePlayer(float offset)
    {
        
        // var eulerAngles = 
        playerController.transform.localEulerAngles = new Vector3(0, startRotate + offset, 0);
    }
    public void RotateCamera(float offset)
    {
        CharShowcam.RotateAround(playerController.transform.position, Vector3.up, offset *Time.deltaTime);
    }
    #endregion

    #region AutoTask
    public void RunTask(AutoGuideConfigures guideConfigures)
    {
        if (guideConfigures != null)
        {
            autoGuide = guideConfigures;
        }
        //解析任务数据
        NavMesh.enabled = true;
        //如果不是-1, 说明是新手需要进行指导任务.
        if (guideConfigures.ID != -1)
        {
           
            var distance = Vector3.Distance(playerController.transform.position, npcsPosArray[guideConfigures.npcID].position);


            //当两者距离过大时, 打开并设置导航
            if (distance > Consts.DistanceToNPC)
            {
                IsNavTask = true;
                // playerController.CameraFollow();
                NavMesh.enabled = true;
                NavMesh.SetDestination(npcsPosArray[guideConfigures.npcID].position);
                NavMesh.speed = Consts.PlayerSpeed;

                playerController.SetBlend(Consts.WalkBlend);

            }
            else//到达NPC跟前时, 关闭导航
            {
                IsNavTask = false;

                OpenGuideWindow();
            }


        }
        else
        {   //运行新手指导
            OpenGuideWindow();
        }
    }

    void Update()
    {
        if (IsNavTask)
        {
            playerController.CameraFollow();
            ReachNavPos();
        }
    }
    ///该方法需要在Update方法中不断调用去检查两者之间的距离,
    //当距离小于一定值的时候. 就结束自动寻路.
    private void ReachNavPos()
    {
        //停止任务导航
        var distance = Vector3.Distance(playerController.transform.position, npcsPosArray[autoGuide.npcID].position);

        if(distance < Consts.DistanceToNPC)
        {
            IsNavTask = false;
            OpenGuideWindow();
        }
    }
    private void StopNav()
    {
        if (IsNavTask) IsNavTask = false;
    }
    private void OpenGuideWindow()
    {
        //Todo
        Debug.Log("打开任务引导页面");
        UIDialogWindow.SetWindowState();

    }
    #endregion
}