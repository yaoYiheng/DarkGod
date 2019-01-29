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
public class GameRoot : Singleton<GameRoot> 
{
    [HideInInspector]
    public ResourceService resourceService = null;
    [HideInInspector]
    public LoginSystem m_LoginSystem = null;
    //该UI因为会在跳转场景中都使用到, 所以在这里赋值


    public UILoadingWindow UILoadingWindow;
    public override void Init()
    {
        //服务模块初始化
        resourceService.Init();

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

        resourceService = ResourceService.Instance;
        m_LoginSystem = LoginSystem.Instance;

        Init();
    }


}