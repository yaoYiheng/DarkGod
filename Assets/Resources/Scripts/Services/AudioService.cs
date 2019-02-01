/****************************************************
    文件：AudioService.cs
	作者：Yiheng
    邮箱: fn1117@qq.com
    日期：2019/1/30 11:10:51
	功能：音频服务
*****************************************************/
using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class AudioService : Singleton<AudioService> 
{
    public AudioSource BGMAudioSource;
    public AudioSource EffectAudioSource;


    public override void Init()
    {
        Debug.Log("音频文件初始化");
    }


    public void PlayBGMusic(string title, bool isLoop)
    {
        var path = "ResAudio/" + title;

        var clip = ResourceService.Instance.LoadClip(path, true);

        if (BGMAudioSource.clip == null || BGMAudioSource.clip.name != title)
        {
            BGMAudioSource.clip = clip;
            BGMAudioSource.loop = isLoop;
            BGMAudioSource.Play();
        }
    }

    public void PlayEffect(string title)
    {
        var path = "ResAudio/" + title;

        var clip = ResourceService.Instance.LoadClip(path, true);


        EffectAudioSource.loop = false;
        EffectAudioSource.PlayOneShot(clip);
    }
}