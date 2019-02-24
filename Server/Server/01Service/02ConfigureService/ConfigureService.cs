// EmptyClass.cs
// yiheng
// 
// 20192241421
using System;
using System.Collections.Generic;
using System.Xml;

public class ConfigureService : Singelton<ConfigureService>
{


    public override void Init()
    {
        Common.Log("服务器端配置初始化");
        InitGuideConfigure();
    }

    #region 获取自动任务配置
    public AutoGuideConfigures GetGuideConfigures(int guideID)
    {
        AutoGuideConfigures guideConfigures = null;
        if (m_GuideDict.TryGetValue(guideID, out guideConfigures))
        {
            return guideConfigures;
        }
        return null;
    }

    private Dictionary<int, AutoGuideConfigures> m_GuideDict = new Dictionary<int, AutoGuideConfigures>();
    private void InitGuideConfigure()
    {

        XmlDocument xml = new XmlDocument();
        xml.Load(@"/Users/yiheng/Documents/Unity相关/DarkGod/Client/Assets/Resources/ResCfgs/guide.xml");
        XmlNodeList list = xml.SelectSingleNode("root").ChildNodes;
        for (int i = 0; i < list.Count; i++)
        {
            var element = list[i] as XmlElement;
            if (element.GetAttributeNode("ID") == null) continue;

            var autoGuide = new AutoGuideConfigures()
            {
                ID = int.Parse(element.GetAttributeNode("ID").InnerText)
            };
            foreach (XmlElement item in list[i].ChildNodes)
            {
                switch (item.Name)
                {
                    case "coin":
                        autoGuide.coin = int.Parse(item.InnerText);
                        break;
                    case "exp":
                        autoGuide.exp = int.Parse(item.InnerText);
                        break;
                    default:
                        break;
                }
            }

            m_GuideDict.Add(autoGuide.ID, autoGuide);
        }

    }
    #endregion
}
public class AutoGuideConfigures : BaseData<AutoGuideConfigures>
{

    public int coin;
    public int exp;
}

public class BaseData<T>
{
    public int ID;
}