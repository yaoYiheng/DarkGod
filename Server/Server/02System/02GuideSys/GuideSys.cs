// GuideSys.cs
// yiheng
// 
// 20192221630
// 引导业务系统
using System;
using PEProtocol;

public class GuideSys : Singelton<GuideSys>
{
    private CacheService cacheService;

    public override void Init()
    {
        Common.Log("引导系统初始化...");

        cacheService = CacheService.Instance;
    }

    public void GuideRequest(MessagePack pack)
    {
        //获取到客户端发来的消息
        var clientData = pack.gameMessage.guideRequest;

        //根据session拿到玩家缓存
        var playerData = cacheService.GetPlayerDataBySession(pack.serverSession);

        //回复客户端的数据包
        var message = new GameMessage()
        {
            cmd = (int)CMD.GuideRequest
        };

        if (clientData.GuideID != playerData.guideid)
        {
            //发送错误码
            message.err = (int)ErrorCode.ServerDataError;
        }
        else
        {
            //更新服务器端的引导ID
            playerData.guideid += 1;

            //服务器需要拿到配置文件, 更新
            //更新数据库中的玩家数据.
            //


        }

        //发送给客户端
        pack.serverSession.SendMsg(message);


    }

}
