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


public class LoginSystem : Singleton<LoginSystem> 
{
    public UILoginWindow LoginWindow;

    public override void Init()
    {
        Debug.Log("初始化登录系统");

    }


    public void EnterLogin()
    {

        //异步加载登录场景
        GameRoot.Instance.resourceService.AsyncLoadScene(Consts.S_LoadingScene);


    }

    ////加载完成后打开注册登录页面
    public void EnterLoginWindow()
    {
        LoginWindow.gameObject.SetActive(true);
        LoginWindow.InitLogin();
    }


}