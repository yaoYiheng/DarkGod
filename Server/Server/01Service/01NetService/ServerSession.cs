// ServerSession.cs
// yiheng
// 
// 201923105
using System;
using PENet;
using PEProtocol;

public class ServerSession : PESession<GameMessage>
{
    protected override void OnConnected()
    {
        PETool.LogMsg("Client Connect");
        SendMsg(new GameMessage() { text = "欢迎连接服务器" });
    }

    protected override void OnReciveMsg(GameMessage msg)
    {

        PETool.LogMsg("Client Req:" + msg.text);
        SendMsg(new GameMessage() { text = "服务器: " + msg.text });
    }
    protected override void OnDisConnected()
    {
        PETool.LogMsg("客户端失去连接");
        SendMsg(new GameMessage() { text = "客户端失去连接" });
    }
}