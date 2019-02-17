// ServerRoot.cs
// yiheng
// 
// 201923926
using System;
public class ServerRoot
{
    static ServerRoot m_Instance = null;
    public static ServerRoot Instance
    {
        get
        {
            if (m_Instance == null)
            {
                m_Instance = new ServerRoot();
            }
            return m_Instance;
        }
    }

    public void InitSertRoot()
    {
        //数据层
        DataBaseManager.Instance.InitDataBase();
        //服务层
        NetSerive.Instance.Init();
        CacheService.Instance.InitCacheService();


        //业务逻辑层
        LoginSystem.Instance.Init();

    }

    public void Update()
    {
        NetSerive.Instance.Update();
    }

    private int sessionID = 0;
    public int GetSersessionID()
    {
        if (sessionID == int.MaxValue)
        {
            sessionID = 0;
        }
        return sessionID += 1;
    }
}