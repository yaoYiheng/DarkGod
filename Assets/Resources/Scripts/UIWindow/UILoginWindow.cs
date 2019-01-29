/****************************************************
    文件：UILoginWindow.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/29 22:48:40
	功能：登录注册页面逻辑
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UILoginWindow : MonoBehaviour 
{
    public InputField m_AccountField;
    public InputField m_PasswordField;

    public Button m_NoticeBtn;
    public Button EnterGameBtn;


    public void InitLogin()
    {
        //如果不是第一次登录, 就显示曾经保存的值和密码
        if (PlayerPrefs.HasKey("Account") && PlayerPrefs.HasKey("Password"))
        {
            m_AccountField.text = PlayerPrefs.GetString("Account");
            m_PasswordField.text = PlayerPrefs.GetString("Password");
        }
        else
        {
            m_AccountField.text = "";
            m_PasswordField.text = "";
        }
    }

    public void OnEnterClick()
    {
        //保存玩家输入

        //进入游戏
    }

}