// MyClass.cs
// yiheng
// 
// 201923956

using System;
using PENet;
namespace PEProtocol
{
    [Serializable]
    public class GameMessage: PEMsg
    {
        //public string text;
        public LoginRequest loginRequest;
    }

    [Serializable]
    public class LoginRequest
    {
        public string Account;
        public string Password;
    }

    public enum CMD
    {
        None = 0,
        //登录相关 100开始
        LoginRequest = 101, 
        LoginResponse = 102
    }
    public class ServiceConfigure
    {
        public const string srvIP = "127.0.0.1";
        public const int serPot = 17666;

    }
}
