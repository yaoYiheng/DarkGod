// LoginSystem.cs
// yiheng
// 
// 201923947
using System;
using PENet;
using PEProtocol;

public class LoginSystem
{
    static LoginSystem m_Instance = null;
    CacheService cacheService = CacheService.Instance;
    public static LoginSystem Instance
    {
        get
        {
            if (m_Instance == null)
            {
                m_Instance = new LoginSystem();
            }
            return m_Instance;
        }
    }

    public void Init()
    {
        Common.Log("登录系统初始化完成");
    }

    public void LoginRequest(MessagePack pack)
    {
        //获取到包中的数据
        var data = pack.gameMessage.loginRequest;
        //回应客户端.
        GameMessage message = new GameMessage()
        {
            cmd = (int)CMD.LoginResponse
        };

        //检测当前账号是否已经上线
        //在缓存中查找
        //已上线: 返回错误信息
        if (cacheService.IsOnline(data.Account))
        {
            //返回错误码
            message.err = (int)ErrorCode.AccountOnLine;
        }
        //未上线:
        else
        {
            //账号是否存在
            var playerData = cacheService.GetPlayerData(data.Account, data.Password);
            //如果查找的玩家数据为空, 说明密码有问题, 返回新错误码
            if (playerData == null)
            {  //存在, 密码错误
                //message.err = (int)ErrorCode.WrongPassword;
            }
            else//账号有效, 将获取到的玩家数据添加到回应客户端的数据包中
            {
                //message.loginRespond.playerData = playerData;
                message.loginRespond = new LoginRespond()
                {
                    playerData = playerData
                };
            }
            //当前账号登录后, 把信息缓存
            cacheService.CacheInfo(data.Account, pack.serverSession, playerData);

        }

        pack.serverSession.SendMsg(message);

    }

    public void RenameRequest(MessagePack pack)
    {
        var data = pack.gameMessage.renameRequest;
        var message = new GameMessage()
        {
            cmd = (int)CMD.RenameRespond
        };
        //拿到重命名的数据包后要做的事
        //在数据库中查询是否有重名的
        if (cacheService.IsNameExit(data.name))
        {   //如果有重名的, 发送重名错误码
            message.err = (int)ErrorCode.NameExit;
        }
        else  //没有重名的, 将传入的名字更新到缓存与数据库
        {
            //试着从缓存层中获取到玩家数据, 
            var playerData = cacheService.GetPlayerDataBySession(pack.serverSession);
            playerData.name = data.name;

            //如果更新名称失败
            if (!cacheService.UpdatePlayerDataToDataBase(playerData.id, playerData))
            {   //发送错误码
                message.err = (int)ErrorCode.UpdateDataBaseError;
            }
            else
            {   // 创建重命名的回应, 将数据库认可的名字发回打包后发回客户端.
                message.renameRespond = new RenameRespond()
                {
                    name = data.name
                };
            }
            //通过传递的会话信息获取缓存中的玩家信息并更新
        }
        //将名字打包发送给客户端.
        pack.serverSession.SendMsg(message);
    }
}
