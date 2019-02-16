// Common.cs
// yiheng
// 
// 201928191
using System;
using PENet;
using PEProtocol;

public enum LogType
{
    Log = 0,
    Warning = 1,
    Error = 2,
    Info = 3
}
public class Common
{
    public static void Log(string msg = "", LogType logType = LogType.Log)
    {
        LogLevel level = (LogLevel)logType;
        PETool.LogMsg(msg, level);
    }

    public static int GetFightPointByData(PlayerData data)
    {
        return data.level * 100 + data.ad + data.addef + data.ap + data.apdef;
    }

    public static int GetPowerLimit(int level)
    {
        return ((level - 1) / 10) * 150 + 150;
    }

    public static int GetLevelUpExp(int level)
    {
        return level * level * 100;
    }
}
