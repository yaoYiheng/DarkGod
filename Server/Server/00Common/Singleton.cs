// Singleton.cs
// yiheng
// 
// 20192221631
using System;
public abstract class Singelton<T> where T : Singelton<T>, new()
{
    private static T m_Instance = new T();

    public static T Instance
    {
        get
        {
            return m_Instance;
        }
    }

    public abstract void Init();

}
