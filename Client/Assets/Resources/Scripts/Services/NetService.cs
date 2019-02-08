/****************************************************
    文件：NetService.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/2/5 9:39:6
	功能：Nothing
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using PENet;
using UnityEngine;
using PEProtocol;

public class NetService : Singleton<NetService>
{
    PESocket<ClientSession, GameMessage> client;
    public override void Init()
    {
        client = new PESocket<ClientSession, GameMessage>();
        client.StartAsClient(ServiceConfigure.srvIP, ServiceConfigure.serPot);
        client.SetLog(true, (string msg, int lv) => {
            switch (lv)
            {
                case 0:
                    msg = "Log:" + msg;
                    Debug.Log(msg);
                    break;
                case 1:
                    msg = "Warn:" + msg;
                    Debug.LogWarning(msg);
                    break;
                case 2:
                    msg = "Error:" + msg;
                    Debug.LogError(msg);
                    break;
                case 3:
                    msg = "Info:" + msg;
                    Debug.Log(msg);
                    break;
            }
        });
    }

    public void SendMessages(GameMessage message)
    {
        if (client.session != null)
        {
            client.session.SendMsg(message);
        }
        else
        {
            GameRoot.AddTips("服务器未连接");
            Init();
        }
    }
    private void Update()
    {
        // if (Input.GetKeyDown(KeyCode.Space))
        // {
        //     client.session.SendMsg(new GameMessage() { 
        //     text = "Hello -- from Unity Client"
            
        //     });

        // }
    }
}