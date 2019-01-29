/****************************************************
    文件：ResourceService.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/29 16:5:35
	功能：Nothing
*****************************************************/

using System;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ResourceService : Singleton<ResourceService> 
{

    public Action OnSceceLoad;

    public override void Init()
    {
        Debug.Log("初始化资源服务");
    }

    //异步加载场景
    //加载的是LoadiScene.
    public void AsyncLoadScene(string name)
    {

        //设置场景为可见
        GameRoot.Instance.UILoadingWindow.gameObject.SetActive(true);
        //初始化 进度条
        //显示加载的进度条
        GameRoot.Instance.UILoadingWindow.InitUI();

        //获取异步加载的
        var progress = SceneManager.LoadSceneAsync(name);

        //方法监听.匿名方法.
        OnSceceLoad = () =>
        {
            GameRoot.Instance.UILoadingWindow.UpdateUI(progress.progress);
            //使用progress == 1做比较胡报错 所以使用下面的API
            if (Mathf.Approximately(progress.progress, 1))
            {
                LoginSystem.Instance.EnterLoginWindow();
                
                //加载完毕时, 就不再监听以及将异步加载场景停止掉
                progress = null;
                OnSceceLoad = null;
                //调用更新方法
                //每一帧都会调用
                GameRoot.Instance.UILoadingWindow.gameObject.SetActive(false);

            }

        };

    }

    private void Update()
    {
        if (OnSceceLoad != null)
        {
            OnSceceLoad();
        }
    }
}