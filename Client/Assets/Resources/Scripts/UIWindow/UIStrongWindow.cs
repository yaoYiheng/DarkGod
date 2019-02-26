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
using UnityEngine.UI;

public class UIStrongWindow : UIWindowRoot 
{
    public Transform PosContainer;

    private Image[] Images = new Image[6];
    private int currentIndex;
    protected override void InitUIwindow()
    {
        base.InitUIwindow();
        RegisterEvents();

        OnImagesClick(0);
    }

    private void RegisterEvents()
    {
        for (int i = 0; i < PosContainer.childCount; i++)
        {
            var image = PosContainer.GetChild(i).GetComponent<Image>();
            OnClick(image.gameObject, (object values)=>{
                OnImagesClick((int) values);
            }, i);
            Images[i] = image;
        }
    }

    private void OnImagesClick(int index)
    {
        currentIndex = index;
        for (int i = 0; i < Images.Length; i++)
        {
            if (i == currentIndex)
            {
                SetSprite(Images[i], Consts.ArrowImg);
            }
            else
            {
                SetSprite(Images[i], Consts.PlantImg);
            }
        }

    }
    public void OnCloseButtonClick()
    {
        SetActive(gameObject, false);
    }
}