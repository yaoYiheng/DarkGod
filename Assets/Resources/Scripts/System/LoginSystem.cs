/****************************************************
    文件：LoginSystem.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/29 16:21:36
	功能：Nothing
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class LoginSystem : MonoBehaviour 
{
    public void InitLoginSys()
    {
        Debug.Log("初始化登录系统");
    }

    public void EnterLogin()
    {
        //设置场景为可见
        GameRoot.Instance.UILoadingWindow.gameObject.SetActive(true);
        //初始化
        GameRoot.Instance.UILoadingWindow.InitUI();

        //异步加载登录场景
        //显示加载的进度条
        GameRoot.Instance.resourceService.AsyncLoadScene(Consts.S_LoadingScene);

        //加载完成后打开注册登录页面
    }
}