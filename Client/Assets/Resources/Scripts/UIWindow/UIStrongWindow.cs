/****************************************************
    文件：UIStrongWindow.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/2/26 11:13:1
	功能：Nothing
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class UIStrongWindow : UIWindowRoot 
{
    protected override void InitUIwindow()
    {
        base.InitUIwindow();
    }

    public void OnCloseButtonClick()
    {
        SetActive(gameObject, false);
    }
}