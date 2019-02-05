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
        PETool.LogMsg("登录系统初始化完成");
    }
}
