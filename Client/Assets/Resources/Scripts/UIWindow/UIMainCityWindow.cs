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
    public Animation MenuAnimation;

    #region UI控件
    public Button MenuBtn;
    public Text LevelText;
    public Text FlightText;
    public Text PowerText;
    public Image PowerImage;
    public Text NameText;
    public Text ExperienceText;
    public Transform expRect;
    #endregion

    #region 私有变量
    private bool IsExpand = true;
    #endregion


    #region 主要方法
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

        //获取升级所需要的经验
        var levelUpExp = Common.GetLevelUpExp(data.level);
        var cuurentPrecentage = (int)(data.experience * 1.0f / levelUpExp * 100);
        UpdateText(ExperienceText, cuurentPrecentage + "%");

        var index = cuurentPrecentage / 10;
        for (int i = 0; i < expRect.childCount; i++)
        {
            if (i < index)
            {
                expRect.GetChild(i).GetComponent<Image>().fillAmount = 1;
            }
            else if (i == index)
            {
                expRect.GetChild(i).GetComponent<Image>().fillAmount = cuurentPrecentage % 10 * 1.0f / 10;
            }
            else
            {
                expRect.GetChild(i).GetComponent<Image>().fillAmount = 0;
            }
        }

        GridLayoutGroup grid = expRect.GetComponent<GridLayoutGroup>();
        //首先获得当前UI针对标准尺寸的缩放比例
        //整个UI相对于在当前屏幕下的缩放比例
        var globalRate = 1.0f * Consts.ScreenStandHeight / Screen.height;
        //计算当前真实UI宽度
        var UIWidth = Screen.width * globalRate;
        //计算Cell宽度
        var cellWidth = (UIWidth - 560) / 10;
        grid.cellSize = new Vector2(cellWidth, 60);
    }
    #endregion

    #region 点击按钮方法
    public void OnMenuBtnClick()
    {
        //播放声效
        audioService.PlayEffect(Consts.A_MenuButtonClick);

        //更改旗子
        IsExpand = !IsExpand;
        // 根据旗子获取到动画Clip
        AnimationClip clip = null;
        if (IsExpand)
        {
            clip = MenuAnimation.GetClip("MenuOpen");
        }
        else
        {
            clip = MenuAnimation.GetClip("MenuClose");
        }
        // 根据不同的cli播放不同的动画效果
        MenuAnimation.Play(clip.name);


    }
    #endregion
}