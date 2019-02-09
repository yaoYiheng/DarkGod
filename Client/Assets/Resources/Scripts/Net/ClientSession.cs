/****************************************************
    文件：ClientSession.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/2/5 9:44:22
	功能：Nothing
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using PEProtocol;
using PENet;

public class ClientSession : PESession<GameMessage>
{
    protected override void OnConnected()
    {
        GameRoot.AddTips("连接服务器成功");
        Common.Log("连接服务器成功");
    }

    protected override void OnDisConnected()
    {
        GameRoot.AddTips("服务器断开连接");
        Common.Log("连接服务器成功");
    }

    protected override void OnReciveMsg(GameMessage msg)
    {
        Common.Log("接受数据包: " + ((CMD)msg.cmd).ToString());
        NetService.Instance.AddMessage(msg);
    }
}