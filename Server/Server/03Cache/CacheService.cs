// CacheService.cs
// yiheng
// 
// 201929041
using System;
using System.Collections.Generic;
using PEProtocol;

public class CacheService
{

    private Dictionary<string, ServerSession> onlineAccountDict = new Dictionary<string, ServerSession>();
    private Dictionary<ServerSession, PlayerData> onlineSessionDict = new Dictionary<ServerSession, PlayerData>();


    private static CacheService m_Instance = null;

    public static CacheService Instance
    {
        get
        {
            if (m_Instance == null)
            {
                m_Instance = new CacheService();
            }
            return m_Instance;
        }
    }

    public void InitCacheService()
    {
        Common.Log("缓存初始化");
    }

    /// <summary>
    /// 根据玩家输入的账号在缓存中查找该账号是否已经在线
    /// </summary>
    public bool IsOnline(string account)
    {
        return onlineAccountDict.ContainsKey(account);
    }

    /// <summary>
    /// 根据账号密码返回对应账号数据, 密码错误返回null, 账号不存在则默认创建新账号.
    /// </summary>
    public PlayerData GetPlayerData(string account, string password)
    {
        //需要从数据库中查找后并返回
        // 留给之后数据库中
        return DataBaseManager.Instance.GetPlayerData(account, password);
    }

    /// <summary>
    /// 账号上线, 缓存数据
    /// </summary>
    public void CacheInfo(string account, ServerSession session, PlayerData data)
    {
        onlineAccountDict.Add(account, session);
        //对账号数据进行缓存
        onlineSessionDict.Add(session, data);

    }
}