// MyClass.cs
// yiheng
// 
// 201923956

using System;
using PENet;
namespace PEProtocol
{
    [Serializable]
    public class GameMessage : PEMsg
    {
        //public string text;
        public LoginRequest loginRequest;
        public LoginRespond loginRespond;

        public RenameRequest renameRequest;
        public RenameRespond renameRespond;
    }

    #region 登录相关
    [Serializable]
    public class LoginRequest
    {
        public string Account;
        public string Password;
    }

    [Serializable]
    public class LoginRespond
    {
        public PlayerData playerData;
    }

    //因为需要转换成2进制在网络传输, 所以会加上[Serializable]
    [Serializable]
    public class PlayerData
    {
        public int id;
        public string name;
        public int level;
        public int experience;
        public int power;
        public int coin;
        public int diamond;

        //待续
    }
    [Serializable]
    public class RenameRequest
    {
        public string name;
    }
    [Serializable]
    public class RenameRespond
    {
        public string name;
    }
    #endregion
    public enum ErrorCode
    {
        None = 0, //没有错误

        UpdateDataBaseError,//更新到数据库时错误

        AccountOnLine, // 账号在线
        WrongPassword,
        NameExit
    }
    public enum CMD
    {
        None = 0,
        //登录相关 100开始
        LoginRequest = 101,
        LoginResponse = 102,

        RenameRequest = 103,
        RenameRespond = 104,

    }
    public class ServiceConfigure
    {
        public const string srvIP = "127.0.0.1";
        public const int serPot = 17666;

    }
}
