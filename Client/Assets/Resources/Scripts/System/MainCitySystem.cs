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


public class MainCitySystem : SystemRoot<MainCitySystem> 
{
    public UIMainCityWindow MainCityWindow;
    public UIInfoWindow UIInfoWindow;
    private PlayerController playerController;
    private Transform CharShowcam;
    private AutoGuideConfigures autoGuide;
    private Transform[] npcsPosArray;
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
            var mapRoot = GameObject.FindGameObjectWithTag("MapRoot");
            npcsPosArray = mapRoot.GetComponent<CityMap>().NPCPosArray;

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
        //如果不是-1, 说明是新手需要进行指导任务.
        if (guideConfigures.ID != -1)
        {
            

        }
        else
        {   //运行新手指导
            OpenGuideWindow();
        }
    }

    private void OpenGuideWindow()
    {
        //Todo
    }
    #endregion
}