/****************************************************
    文件：UIDialogWindow.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/2/22 11:11:57
	功能：Nothing
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using PEProtocol;

public class UIDialogWindow : UIWindowRoot 
{
    public Text NameText;
    public Text DialogText;
    public Image IconImage;
    private PlayerData PlayerData;
    private AutoGuideConfigures GuideConfigures;
    private string[] DialogArray;
    private int DialogIndex;
    protected override void InitUIwindow()
    {
        base.InitUIwindow();
        PlayerData = GameRoot.Instance.PlayerData;
        GuideConfigures = resourceService.GetGuideConfigures(PlayerData.guideid);
        DialogArray = GuideConfigures.dilogArr.Split('#');

        SetDialog();
    }

    private void SetDialog()
    {

    }
}