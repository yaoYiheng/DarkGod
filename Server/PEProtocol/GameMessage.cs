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
        public string text;
    }

    public class ServiceConfigure
    {
        public const string srvIP = "127.0.0.1";
        public const int serPot = 17666;

    }
}
