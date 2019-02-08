/****************************************************
    文件：GameRoot.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/29 15:39:38
	功能：Nothing
*****************************************************/

using UnityEngine;
[RequireComponent(typeof(ResourceService))]
[RequireComponent(typeof(LoginSystem))]
[RequireComponent(typeof(AudioService))]
[RequireComponent(typeof(NetService))]
public class GameRoot : Singleton<GameRoot> 
{
    [HideInInspector]
    public ResourceService resourceService = null;
    [HideInInspector]
    public LoginSystem m_LoginSystem = null;
    [HideInInspector]
    public AudioService audioService = null;
    [HideInInspector]
    public NetService netService = null;
    //该UI因为会在跳转场景中都使用到, 所以在这里赋值


    public UILoadingWindow UILoadingWindow;
    public UIDynamicWindow UIDynamicWindow;
    public override void Init()
    {
        //服务模块初始化
        resourceService.Init();
        audioService.Init();
        netService.Init();

        //业务系统初始化
        InitSystems();



    }


    private void InitSystems()
    {
        //初始化LoninSystem
        m_LoginSystem.Init();
        //进入登录场景并加载相应的UI 
        m_LoginSystem.EnterLogin();
    }


    private void Start()
    {
        Debug.Log("游戏开始");

        DontDestroyOnLoad(this.gameObject);
        //对绑定在GR上的组件赋值
        resourceService = ResourceService.Instance;
        m_LoginSystem = LoginSystem.Instance;
        audioService = AudioService.Instance;
        netService = NetService.Instance;
        //初始化
        Init();
        //调试用, 清零UI
        //ClearUI();
        //只显示Tips
        UIDynamicWindow.SetWindowState();

    }

    public static void PlayEffect(string title)
    {
        Instance.audioService.PlayEffect(title);
    }

    //全局添加提示
    public static void AddTips(string tips)
    {
        Instance.UIDynamicWindow.AddTips(tips);
    }


    private void ClearUI()
    {
        var canvas = transform.Find("Canvas");
        for (int i = 0; i < canvas.childCount; i++)
        {
            canvas.transform.GetChild(i).gameObject.SetActive(false);
        }
    }
}