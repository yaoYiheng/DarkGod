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
        base.OnConnected();
    }

    protected override void OnDisConnected()
    {
        base.OnDisConnected();
    }

    protected override void OnReciveMsg(GameMessage msg)
    {
        base.OnReciveMsg(msg);
    }
}