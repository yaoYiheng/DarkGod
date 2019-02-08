// Program.cs
// yiheng
// 
// 201923912
using System;

public class ServerStart
{
    public static void Main(string[] args)
    { 
        ServerRoot.Instance.InitSertRoot();

        while (true) 
        {
            ServerRoot.Instance.Update();
        }
    
    }
}