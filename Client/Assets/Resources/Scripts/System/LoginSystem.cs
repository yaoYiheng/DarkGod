/****************************************************
    文件：LoginSystem.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/29 16:21:36
	功能：管理
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using PEProtocol;
using UnityEngine;


public class LoginSystem : SystemRoot<LoginSystem>
{
    public UILoginWindow LoginWindow;
    public UICreatWindow UICreatWindow;
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

    // 模拟当请求返回时跳转
    public void ReqLogin(GameMessage message)
    {
        GameRoot.AddTips("登录成功");
        //将从服务器返回的数据保存起来
        GameRoot.Instance.PlayerData = message.loginRespond.playerData;
        //如果从服务器返回的默认的游戏玩家的名称为空, 则跳转到创建玩家的页面
        if (message.loginRespond.playerData.name == "")
        {
            //显示创建页面
            UICreatWindow.SetWindowState();
        }
        else
        {
            //TODO进入主城.
            MainCitySystem.Instance.EnterMainCity();
        }

        //隐藏登录页面
        LoginWindow.SetWindowState(false);

    }


/// 负责响应服务器回复的改名请求
    public void RenameRespond(GameMessage message)
    {
        //将由服务器返回的名字更新到客户端
        GameRoot.Instance.ResetPlayerName(message.renameRespond.name);

        //跳转页面打开主城
        MainCitySystem.Instance.EnterMainCity();
        //关闭创建角色的页面
        UICreatWindow.SetWindowState(false);
    }
}