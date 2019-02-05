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

        //服务层
        NetSerive.Instance.Init();

        //业务逻辑层
        LoginSystem.Instance.Init();

    }
}