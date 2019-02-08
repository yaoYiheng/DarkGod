// Common.cs
// yiheng
// 
// 201928191
using System;
using PENet;

public  enum LogType
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
}
