/****************************************************
    文件：UIInfoWindow.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/2/19 18:4:32
	功能：Nothing
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
public class UIInfoWindow : UIWindowRoot
{
    #region UI
    public RawImage CharShowRaw;
    public Text NameAndLevelText;
    public Text ExpText;
    public Image ExpImage;
    public Text PowerText;
    public Image PowerImage;
    public Text FightText;
    public Text HPText;
    public Text DamageText;
    public Text DefenceText;

    #region 详情
    public Transform DetailInfo;
    public Text DetailHPText;
    public Text DetailADText;
    public Text DetailHAPText;
    public Text DetailAPText;
    public Text DetailHAPDText;
    public Text DetailDodgeText;
    public Text DetailPierceText;
    public Text DetailCriticalText;
    #endregion
    #endregion
    private Vector2 StartPos;
    protected override void InitUIwindow()
    {
        base.InitUIwindow();
        RegisterEvents();
        UpdateUI();
    }

    //注册拖拽事件
    private void RegisterEvents()
    {
        OnClickDown(CharShowRaw.gameObject, (PointerEventData data) =>
        {
            StartPos = data.position;
            MainCitySystem.Instance.SetStartRotate();
        });
        OnDrag(CharShowRaw.gameObject, (PointerEventData data) =>
        {
            var offset = data.position.x - StartPos.x;

            // MainCitySystem.Instance.RotateCamera(offset * 0.3f) ;
            MainCitySystem.Instance.RotatePlayer(-offset * 0.3f) ;
        });
    }

    private void UpdateUI()
    {

        var playerData = GameRoot.Instance.PlayerData;

        UpdateText(NameAndLevelText, playerData.name + "LV." + playerData.level);
        UpdateText(ExpText, playerData.experience + "/" + Common.GetLevelUpExp(playerData.level));
        UpdateText(PowerText, playerData.power + "/" + Common.GetPowerLimit(playerData.level));
        ExpImage.fillAmount = 1.0f * playerData.experience / Common.GetLevelUpExp(playerData.level);
        PowerImage.fillAmount = 1.0f * playerData.power / Common.GetPowerLimit(playerData.level);

        UpdateText(FightText, Common.GetFightPointByData(playerData));
        UpdateText(HPText, playerData.hp);
        UpdateText(DamageText, playerData.ad + playerData.ap);
        UpdateText(DefenceText, playerData.addef + playerData.apdef);

        //详细信息
        UpdateText(DetailHPText, playerData.hp);
        UpdateText(DetailADText, playerData.ad);
        UpdateText(DetailHAPText, playerData.ap);
        UpdateText(DetailAPText, playerData.addef);
        UpdateText(DetailHAPDText, playerData.apdef);
        UpdateText(DetailDodgeText, playerData.dodge + "%");
        UpdateText(DetailPierceText, playerData.pierce + "%");
        UpdateText(DetailCriticalText, playerData.critical + "%");
    }

    public void ShowInfoWindow()
    {

        UpdateUI();
        SetWindowState();
    }

    public void HideInfoWindow()
    {
        SetWindowState(false);
        
        AudioService.Instance.PlayEffect(Consts.A_MenuButtonClick);
        MainCitySystem.Instance.HideInfowWindow();
    }
    public void OnDetailButtonClick()
    {
        SetActive(DetailInfo);
    }
    public void OnDetailCloseButtonClick()
    {

        SetActive(DetailInfo, false);
    }
}