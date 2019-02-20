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
using UnityEngine.EventSystems;
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

    //  摇杆插件
    public Image TouchArea;
    public Image TouchBGImage;
    public Image TouchPointImage;

    public Button AutoTaskButton;
    #endregion

    #region 私有变量
    private bool IsExpand = true;
    private Vector2 defalutBGPos;
    private Vector2 startPos;
    private float pointDistance;
    
    #endregion


    #region 主要方法
    protected override void InitUIwindow()
    {
        base.InitUIwindow();
        UpdateUI();
        //注册点击事件
        RegisteTouchEvents();
        SetActive(TouchPointImage, false);
        defalutBGPos = TouchBGImage.transform.position;
        pointDistance = Screen.height * 1.0f / Consts.ScreenStandHeight * Consts.ScreenStandOPDisctance;
    }
    
    #region 摇杆
    public void RegisteTouchEvents()
    {
        OnClickDown(TouchArea.gameObject, (PointerEventData events) =>{
            //记录一开始按下的位置
            startPos = events.position;
            TouchBGImage.transform.position = events.position;
            SetActive(TouchPointImage);
        });
        OnClickUp(TouchArea.gameObject, (PointerEventData events) =>{
            TouchBGImage.transform.position = defalutBGPos;
            SetActive(TouchPointImage, false);
            TouchPointImage.transform.localPosition = Vector2.zero;

            //TODO方向信息传递
            MainCitySystem.Instance.MoveCharator(Vector2.zero);
        });

        OnDrag(TouchArea.gameObject, (PointerEventData events) =>{
            //通过开始点击的位置与当前拖拽的位置计算拖拽的方向, 需要将该方向传递出去
            var direction = events.position - startPos;
            var distance = direction.magnitude;

            //限制
            // pointDistance 为根据当前屏幕I所计算出来的值
            // 当距离大于该值时, 需要对方向向量的长度进行限制.
            if(distance > pointDistance)
            {
                var clampDir = Vector2.ClampMagnitude(direction, pointDistance);
                TouchPointImage.transform.position = startPos + clampDir;
            }
            else
            {
                TouchPointImage.transform.position = events.position;
            }

            //TODO方向信息传递
            MainCitySystem.Instance.MoveCharator(direction.normalized);
        });
    }


    #endregion
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

        #region 经验条
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
        #endregion

        //设置自动任务的图片
        SetGuideButtonIcon(-1);

    }
    private void SetGuideButtonIcon(int npcID)
    {
        // 图片路径
        string path = "";
        var icon = AutoTaskButton.GetComponent<Image>();
        switch (npcID)
        {
            case Consts.NPCWiseman:
            path = Consts.NPC_Wiseman;
            break;
            case Consts.NPCGeneral:
            path = Consts.NPC_General;
            break;
            case Consts.NPCArtisan:
            path = Consts.NPC_Artisan;
            break;
            case Consts.NPCTrader:
            path = Consts.NPC_Trader;
            break;            
            default:
            path = Consts.NPC_Default;
            break;
        }

        
    
    
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

    public void OnHeadClick()
    {
        MainCitySystem.Instance.ShowInfoWindow();
    }
    #endregion

}