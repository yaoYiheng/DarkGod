/****************************************************
    文件：UIMainCityWindow.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/2/13 15:20:32
	功能：主城UI
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UIMainCityWindow : UIWindowRoot
{

    public Text LevelText;
    public Text FlightText;
    public Text PowerText;
    public Image PowerImage;
    public Text NameText;
    public Text ExperienceText;
    protected override void InitUIwindow()
    {
        base.InitUIwindow();
        UpdateUI();
    }
    private void UpdateUI()
    {
        //根据玩家数据更新UI
        var data = GameRoot.Instance.PlayerData;
        //更新战斗力
        UpdateText(LevelText, data.level);
        UpdateText(FlightText, Common.GetFightPointByData(data));
        UpdateText(PowerText, "体力:" + data.power + "/" + Common.GetPowerLimit(data.level));
        PowerImage.fillAmount = data.power * 1.0f / Common.GetPowerLimit(data.level);
        UpdateText(NameText, data.name);
        UpdateText(ExperienceText, data.experience + "%");
    }
}