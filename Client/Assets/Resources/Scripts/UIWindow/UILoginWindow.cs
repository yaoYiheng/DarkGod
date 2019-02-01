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

public class UILoginWindow : UIWindowRoot 
{
    public InputField m_AccountField;
    public InputField m_PasswordField;

    public Button m_NoticeBtn;
    public Button EnterGameBtn;


    protected override void InitUIwindow()
    {
        base.InitUIwindow();
        //如果不是第一次登录, 就显示曾经保存的值和密码
        if (PlayerPrefs.HasKey(Consts.SavingAccount) && PlayerPrefs.HasKey(Consts.SavingPassword))
        {
            m_AccountField.text = PlayerPrefs.GetString(Consts.SavingAccount);
            m_PasswordField.text = PlayerPrefs.GetString(Consts.SavingPassword);
        }
        else
        {
            m_AccountField.text = "";
            m_PasswordField.text = "";
        }
    }

    public void OnEnterClick()
    {
        //GameRoot.Instance.audioService.PlayEffect(Consts.A_Login);
        GameRoot.PlayEffect(Consts.A_Login);
        //保存玩家输入
        var account = m_AccountField.text;
        var password = m_PasswordField.text;

        //对输入进行判断
        if (account != "" && password != "")
        {
            //保存
            PlayerPrefs.SetString(Consts.SavingAccount, account);
            PlayerPrefs.SetString(Consts.SavingPassword, password);

            //发送网络请求

            //切换场景
            LoginSystem.Instance.ReqLogin();

        }

        //进入游戏
    }
    public void OnNoticeClick()
    {
        GameRoot.PlayEffect(Consts.A_ButtonClick);
    }

}