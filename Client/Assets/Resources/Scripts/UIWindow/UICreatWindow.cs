/****************************************************
    文件：UICreatWindow.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/30 15:6:15
	功能：Nothing
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class UICreatWindow : UIWindowRoot
{

    public InputField iptName;


    protected override void InitUIwindow()
    {
        base.InitUIwindow();
        iptName.text = GameRoot.Instance.resourceService.GetRandomName(true);


    }

    public void OnRandomButtonClick()
    {

        GameRoot.PlayEffect(Consts.A_ButtonClick);
        var rdname = GameRoot.Instance.resourceService.GetRandomName(true);
        iptName.text = rdname;
    }

    public void OnEnterGameClick()
    {
        GameRoot.PlayEffect(Consts.A_ButtonClick);
        if (iptName.text == "" || iptName.text == null) 
        {
            GameRoot.AddTips("请输入合法名称");
        }
        //发送请求;
    }
}