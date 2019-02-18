/****************************************************
    文件：ResourceService.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/29 16:5:35
	功能：Nothing
*****************************************************/

using System;
using System.Collections.Generic;
using System.Xml;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ResourceService : Singleton<ResourceService>
{

    private Action OnSceceLoad;
    Dictionary<string, AudioClip> m_Audios = new Dictionary<string, AudioClip>();
    List<string> m_Surname = new List<string>();
    List<string> m_MaleName = new List<string>();
    List<string> m_FemaleName = new List<string>();

   
    public override void Init()
    {
        LoadFromFile(Consts.RdNamePath);
        LoadMapConfigure(Consts.MapCfgPath);
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

    // 返回音频资源
    public AudioClip LoadClip(string path, bool cached)
    {
        AudioClip clip = null;
        if (!m_Audios.TryGetValue(path, out clip))
        {
            clip = Resources.Load<AudioClip>(path);
            ////Resources.LoadAll<>();
            //Tools.LoadClip(path,ref clip);
            if (cached)
            {
                m_Audios[path] = clip;
            }
        }


        return clip;
    }

    #region 地图配置

 //地图配置文件
    Dictionary<int, MapConfigures> m_MapDict = new Dictionary<int, MapConfigures>();
    //获取地图配置文件
    public MapConfigures GetConfigures(int id)
    {
        MapConfigures data = null;
        if(m_MapDict.TryGetValue(id, out data)) return data;

        return null;
    }
    //从文件中加载地图配置文件到内存
    void LoadMapConfigure(string path)
    {
        TextAsset asset = Resources.Load<TextAsset>(path);
        //加载XML文件

        if (asset == null)
        {
            Debug.Log("文件为空");
        }
        else//添加到字典中
        {
            XmlDocument document = new XmlDocument();
            document.LoadXml(asset.text);

            XmlNodeList xmlNodeList = document.SelectSingleNode("root").ChildNodes;
            for (int i = 0; i < xmlNodeList.Count; i++)
            {
                XmlElement element = xmlNodeList[i] as XmlElement;
                if (element.GetAttributeNode("ID") == null) continue;

                var id = int.Parse(element.GetAttributeNode("ID").InnerText);
                MapConfigures mapCfg = new MapConfigures()
                {
                    ID = id
                };
                foreach (XmlElement item in xmlNodeList[i].ChildNodes)
                {
                    switch (item.Name)
                    {
                        case "mapName":
                            mapCfg.mapName = item.InnerText;
                            break;
                        case "sceneName":
                            mapCfg.sceneName = item.InnerText;
                            break;
                        case "mainCamPos":
                        {
                            var nums = item.InnerText.Split(',');
                            mapCfg.mainCamPos = new Vector3(float.Parse(nums[0]),float.Parse(nums[1]),float.Parse(nums[2]));
                            break;
                        }
                        case "mainCamRote":
                        {
                            var nums = item.InnerText.Split(',');
                            mapCfg.mainCamRot = new Vector3(float.Parse(nums[0]),float.Parse(nums[1]),float.Parse(nums[2]));
                            break;
                        }
                        case "playerBornPos":
                        {
                            var nums = item.InnerText.Split(',');
                            mapCfg.playerBornPos = new Vector3(float.Parse(nums[0]),float.Parse(nums[1]),float.Parse(nums[2]));
                            break;
                        }
                        case "playerBornRote":
                        {
                            var nums = item.InnerText.Split(',');
                            mapCfg.playerBornRot = new Vector3(float.Parse(nums[0]),float.Parse(nums[1]),float.Parse(nums[2]));
                            break;
                        }
                        default:
                            break;
                    }
                }

                m_MapDict.Add(id, mapCfg);
            }
        }


    }    
    #endregion
    void LoadFromFile(string path)
    {
        TextAsset asset = Resources.Load<TextAsset>(path);
        //加载XML文件

        if (asset == null)
        {
            Debug.Log("文件为空");
        }
        else//添加到字典中
        {
            XmlDocument document = new XmlDocument();
            document.LoadXml(asset.text);

            XmlNodeList xmlNodeList = document.SelectSingleNode("root").ChildNodes;
            for (int i = 0; i < xmlNodeList.Count; i++)
            {
                XmlElement element = xmlNodeList[i] as XmlElement;
                if (element.GetAttributeNode("ID") == null) continue;

                foreach (XmlElement item in xmlNodeList[i].ChildNodes)
                {
                    switch (item.Name)
                    {
                        case "surname":
                            m_Surname.Add(element.InnerText);
                            break;
                        case "man":
                            m_MaleName.Add(element.InnerText);
                            break;
                        case "woman":
                            m_FemaleName.Add(element.InnerText);
                            break;
                        default:
                            break;
                    }
                }

            }
        }


    }


    public string GetRandomName(bool isFamle)
    {
        // System.Random random = new System.Random();
        var rdName = m_Surname[Tools.RandomInt(0, m_Surname.Count - 1)];
        //rdName += isFamle? m_FemaleName[Tools.RandomInt(0, m_FemaleName.Count - 1)]:m_MaleName[Tools.RandomInt(0, m_MaleName.Count - 1)];

        return rdName;
    }

    Dictionary<string, GameObject> m_Player = new Dictionary<string, GameObject>();
    public GameObject GetPlayer(string name, bool isCache)
    {
        GameObject go = null;
        if(m_Player.TryGetValue(name, out go)) return go;
        
        if (go == null)
        {
            go = Resources.Load<GameObject>(Consts.PrefabPath + name);
            go = Instantiate(go);
            if (isCache)
            {
                m_Player.Add(name, go);
            }
        }
        return go;

    }
    #region 系统回调
    private void Update()
    {
        if (OnSceceLoad != null)
        {
            OnSceceLoad();
        }
    }
    #endregion
}