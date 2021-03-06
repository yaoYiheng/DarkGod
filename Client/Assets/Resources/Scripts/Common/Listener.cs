/****************************************************
    文件：Listener.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/2/17 17:38:2
	功能：Nothing
*****************************************************/
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;

public class Listener : MonoBehaviour,IPointerClickHandler, IPointerDownHandler, IPointerUpHandler, IDragHandler
{
    public Action<object> onClick;
    public Action<PointerEventData> onClickDown;
    public Action<PointerEventData> onClickUp;
    public Action<PointerEventData> onDrag;
    public object valueObj;
    public void OnDrag(PointerEventData eventData)
    {
        if(onDrag != null)
        {
            onDrag(eventData);
        }
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        if (onClick != null)
        {   
            onClick(valueObj);
        }
    }

    public void OnPointerDown(PointerEventData eventData)
    {
        if (onClickDown!=null)
        {
            onClickDown(eventData);
        }
    }

    public void OnPointerUp(PointerEventData eventData)
    {
        if(onClickUp != null)
        {
            onClickUp(eventData);
        }
    }
}