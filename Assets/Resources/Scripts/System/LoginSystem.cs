/****************************************************
    文件：LoginSystem.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/29 16:21:36
	功能：管理
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class LoginSystem : SystemRoot<LoginSystem>
{
    public UILoginWindow LoginWindow;

    public override void Init()
    {
        base.Init();
        Debug.Log("初始化登录系统");

    }


    public void EnterLogin()
    {

        //异步加载登录场景
        //GameRoot.Instance.resourceService.AsyncLoadScene(Consts.S_LoadingScene, EnterLoginWindow);

        //可以更进步简化. Lambda表达式
        //连下面的方法也可以省略
        GameRoot.Instance.resourceService.AsyncLoadScene(Consts.S_LoadingScene, ()=>

        {
            //LoginWindow.gameObject.SetActive(true);
            //LoginWindow.InitLogin();

            //简化后代替上面代码
            LoginWindow.SetWindowState(true);
            //进入场景后, 播放背景音乐
            //GameRoot.Instance.audioService.PlayBGMusic(Consts.A_BGMClip, true);
            //继承了SystemRoot后, 可进一步简化
            audioService.PlayBGMusic(Consts.A_BGMClip, true);


        });
    }

    ////加载完成后打开注册登录页面
    //public void EnterLoginWindow()
    //{
    //    LoginWindow.gameObject.SetActive(true);
    //    LoginWindow.InitLogin();
    //}


}