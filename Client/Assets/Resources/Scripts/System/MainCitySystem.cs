/****************************************************
    文件：MainCitySystem.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/2/13 15:22:7
	功能：主城业务逻辑
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class MainCitySystem : SystemRoot<MainCitySystem> 
{
    public UIMainCityWindow MainCityWindow;

    public override void Init()
    {
        //需要调用父类的初始化方法完成一些写在父类中的逻辑
        base.Init();
        Common.Log("初始化主城");


    }

    public void EnterMainCity()
    {

        MainCityWindow.SetWindowState();
        //主城的场景在资源中, 调用资源服务器.
        // 传入主城的场景名称, 以及主城加载完成之后的任务回调
        resourceService.AsyncLoadScene(Consts.S_MainCityScene, ()=>{

            Common.Log("进入主城");
            //当场景加载完成后, 显示主城的UI页面
            MainCityWindow.SetWindowState();

            //播放主城的背景音乐
            audioService.PlayBGMusic(Consts.A_BGMCity, true);
            //角色的初始化导入

            //TODO设置人物相机
        });
    }
}