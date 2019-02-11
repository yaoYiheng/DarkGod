// DataBaseManager.cs
// yiheng
// 
// 20192101626
using System;
using MySql.Data.MySqlClient;
using PEProtocol;

public class DataBaseManager
{
    private static DataBaseManager m_Instance = null;

    private MySqlConnection connection = null;

    public static DataBaseManager Instance
    {
        get
        {
            if (m_Instance == null)
            {
                m_Instance = new DataBaseManager();
            }
            return m_Instance;
        }
    }

    public void InitDataBase()
    {
        connection = new MySqlConnection("server = 127.0.0.1;" +
        "User Id = root;" +
        "password = yy19901001...;" +
        "Database = darkgod;" +
        "Charset = utf8");

        connection.Open();
    }

    public PlayerData GetPlayerData(string account, string password)
    {
        PlayerData data = null;

        return data;
    }
}