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
        DialogIndex = 1;
        SetDialog();
    }

    private void SetDialog()
    {
        string[] dialogs = DialogArray[DialogIndex].Split('|');
        if (dialogs[0] == "0")
        {
            UpdateText(NameText, PlayerData.name);
            SetSprite(IconImage, Consts.SelfICon);
         
        }
        else
        {
            switch (GuideConfigures.npcID)
            {
                case Consts.NPCWiseman:

                SetSprite(IconImage, Consts.WiseManICon);
                UpdateText(NameText, Consts.NPCWisemanT);

                break;
                case Consts.NPCGeneral:

                SetSprite(IconImage, Consts.GeneralICon);
                UpdateText(NameText, Consts.NPCWisemanT);
                break;
                case Consts.NPCArtisan:
                UpdateText(NameText, Consts.NPCWisemanT);
                SetSprite(IconImage, Consts.ArtisanICon);

                break;
                case Consts.NPCTrader:

                SetSprite(IconImage, Consts.TraderICon);
                UpdateText(NameText, Consts.NPCTraderT);
                break;
                default:

                SetSprite(IconImage, Consts.NPC_Default);
                UpdateText(NameText, Consts.NPCDefaultT);
                break;
            }         
        }
        UpdateText(DialogText, dialogs[1].Replace("$name", PlayerData.name));
    }
    public void NextDiolog()
    {
        if(DialogIndex < DialogArray.Length - 1)
        {
            DialogIndex += 1;
            SetDialog();

            return;
        }
        //结束对话
        SetActive(this.gameObject, false);
        //向服务器发送结束任务消息
        netService.SendMessages(new GameMessage (){
            cmd = (int)CMD.GuideRequest,

            guideRequest = new GuideRequest()
            {
                GuideID = GuideConfigures.ID
            }
        });
    }
}