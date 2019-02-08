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
        //检测当前账号是否已经上线

        //已上线: 返回错误信息
        //未上线:
        //账号是否存在
        //存在, 检测密码
        //不存在, 创建默认账号密码

        //回应客户端.
        GameMessage message = new GameMessage()
        {
            cmd = (int)CMD.LoginResponse,
            loginRespond = new LoginRespond()
        };
        Console.WriteLine("向客户端发送");
        pack.serverSession.SendMsg(message);

    }
}
