// NetSerive.cs
// yiheng
// 
// 201923946
using System;
using System.Collections.Generic;
using PENet;
using PEProtocol;


public class MessagePack
{
    public ServerSession serverSession;
    public GameMessage gameMessage;
    public MessagePack(ServerSession session, GameMessage message)
    {
        this.serverSession = session;
        this.gameMessage = message;
    }

}

public class NetSerive
{
    static NetSerive m_Instance = null;
    static readonly string obj = "lock";
    Queue<MessagePack> msgPackQueue = new Queue<MessagePack>();
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

        Common.Log("网络初始化完成");
    }

    //加入消息到队列
    public void AddMessage(MessagePack pack)
    {
        lock (obj)
        {
            msgPackQueue.Enqueue(pack);
        }
    }

    //取出数据
    public void Update()
    {
        if (msgPackQueue.Count > 0)
        {
            Common.Log("队列里的数据数量" + msgPackQueue.Count);
            //取出数据
            lock (obj)
            {
                MessagePack pack = msgPackQueue.Dequeue();
                HandleMessage(pack);
            }



        }
    }

    //分发处理数据
    private void HandleMessage(MessagePack pack)
    {
        switch ((CMD)pack.gameMessage.cmd)
        {
            case CMD.LoginRequest:
                LoginSystem.Instance.LoginRequest(pack);
                break;
            case CMD.RenameRequest:
                LoginSystem.Instance.RenameRequest(pack);
                break;

            default:
                break;
        }
    }

}