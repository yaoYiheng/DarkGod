// ServerSession.cs
// yiheng
// 
// 201923105
using System;
using PENet;
using PEProtocol;

public class ServerSession : PESession<GameMessage>
{
    public int SessionID = 0;
    protected override void OnConnected()
    {
        SessionID = ServerRoot.Instance.GetSersessionID();
        Common.Log("客户端Session == " + SessionID);
        //SendMsg(new GameMessage() { text = "欢迎连接服务器" });
    }
    protected override void OnDisConnected()
    {
        CacheService.Instance.AccountOffLine(this);
        Common.Log("客户端失去连接" + this.SessionID);
        //SendMsg(new GameMessage() { text = "客户端失去连接" });
    }
    protected override void OnReciveMsg(GameMessage msg)
    {

        Common.Log("Client Req:" + msg.cmd.ToString());
        //将来自客户端的消息传递给服务器的网络服务(NetService)进行处理
        NetSerive.Instance.AddMessage(new MessagePack(this, msg));

        //SendMsg(new GameMessage() { text = "服务器: " + msg.text });
    }

}