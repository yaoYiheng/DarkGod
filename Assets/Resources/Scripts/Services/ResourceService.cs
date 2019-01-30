/****************************************************
    文件：ResourceService.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/29 16:5:35
	功能：Nothing
*****************************************************/

using System;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ResourceService : Singleton<ResourceService> 
{

    private Action OnSceceLoad;
    Dictionary<string, AudioClip> m_Audios = new Dictionary<string, AudioClip>();

    public override void Init()
    {
        Debug.Log("初始化资源服务");
    }

    //异步加载场景
    //加载的是LoadiScene.
    public void AsyncLoadScene(string name, Action OnLoaded)
    {

        //设置场景为可见
        //GameRoot.Instance.UILoadingWindow.gameObject.SetActive(true);
        ////初始化 进度条
        ////显示加载的进度条
        //GameRoot.Instance.UILoadingWindow.InitUIwindow();

        //对LoadingWindow进行抽象继承后, 简化上面的代码.
        GameRoot.Instance.UILoadingWindow.SetWindowState();
        //获取异步加载的
        var progress = SceneManager.LoadSceneAsync(name);

        //方法监听.匿名方法.
        OnSceceLoad = () =>
        {
            //因为进度条是通用的, 所以这样写没有关系.
            GameRoot.Instance.UILoadingWindow.UpdateUI(progress.progress);
            //使用progress == 1做比较胡报错 所以使用下面的API
            if (Mathf.Approximately(progress.progress, 1))
            {
                //不能在这里直接写加载到登录页面, 因为之后还会用到该方法.
                //应该使用一个回调函数来完成这个功能
                //LoginSystem.Instance.EnterLoginWindow();

                //当完成加载, 应该跳转到Login场景时. 使用回调
                if (OnLoaded != null)
                {
                    OnLoaded();
                }

                //加载完毕时, 就不再监听以及将异步加载场景停止掉
                progress = null;
                OnSceceLoad = null;
                //调用更新方法
                //每一帧都会调用
                //GameRoot.Instance.UILoadingWindow.gameObject.SetActive(false);
                GameRoot.Instance.UILoadingWindow.SetWindowState(false);

            }

        };

    }

    public AudioClip LoadClip(string path, bool cached)
    {
        AudioClip clip = null;
        if (!m_Audios.TryGetValue(path, out clip))
        {
            clip = Resources.Load<AudioClip>(path);
            if (cached)
            {
                m_Audios[path] = clip;
            }
        }


        return clip;
    }
    private void Update()
    {
        if (OnSceceLoad != null)
        {
            OnSceceLoad();
        }
    }
}