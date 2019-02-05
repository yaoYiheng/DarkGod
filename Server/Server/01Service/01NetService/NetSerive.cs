// NetSerive.cs
// yiheng
// 
// 201923946
using System;
using PENet;
using PEProtocol;

public class NetSerive
{
    static NetSerive m_Instance = null;
    public static NetSerive Instance
    {
        get
        {
            if (m_Instance == null)
            {
                m_Instance = new NetSerive();
            }
            return m_Instance;
        }
    }

    public void Init()
    {
        PESocket<ServerSession, GameMessage> server = new PESocket<ServerSession, GameMessage>();
        server.StartAsServer(ServiceConfigure.srvIP, ServiceConfigure.serPot);

        PETool.LogMsg("网络初始化完成");
    }

}