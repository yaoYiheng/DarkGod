/****************************************************
    文件：SystemRoot.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/30 11:53:22
	功能：Nothing
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public abstract class SystemRoot<T> : Singleton<T> where T: MonoBehaviour
{
    protected AudioService audioService;
    protected ResourceService resourceService;


    //之后如果还有计时系统等等还可继续添加
    public override void Init()
    {
        audioService = AudioService.Instance;
        resourceService = ResourceService.Instance;
    }
}