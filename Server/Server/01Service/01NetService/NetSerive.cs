// NetSerive.cs
// yiheng
// 
// 201923946
using System;
using System.Collections.Generic;
using PENet;
using PEProtocol;

public class NetSerive
{
    static NetSerive m_Instance = null;
    static readonly string obj = "lock";
    Queue<GameMessage> msgPackQueue = new Queue<GameMessage>();
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
    public void AddMessage(GameMessage message)
    {
        lock (obj)
        {
            msgPackQueue.Enqueue(message);
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
                GameMessage message = msgPackQueue.Dequeue();
                HandleMessage(message);
            }



        } 
    }

    //分发处理数据
    private void HandleMessage(GameMessage message)
    {
        switch ((CMD)message.cmd)
        {
            case CMD.LoginRequest:
                LoginSystem.Instance.LoginRequest(message);
                break;

            default:
                break;
        }
    }

}