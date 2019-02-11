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
        "password = Yy19901001...;" +
        "Database = studymysql;" +
        "Charset = utf8");

        connection.Open();
        //测试.
        GetPlayerData("Mono", "123456");
    }

    /// <summary>
    /// 通过玩家输出的账号密码在数据库中进行查询, 如果通过输入的账号在数据库中查找的密码与输入的密码相一致,
    /// 则返回从数据库中获取的玩家数据, 如果账号存在但密码有误, 则抛出一个错误.
    /// 如果玩家输入的账号不存在与数据中, 则默认根据输出的账号创建一个新的账号, 并插入到数据库中, 同时完成
    /// 对该账号的id赋值
    /// </summary>
    public PlayerData GetPlayerData(string account, string password)
    {
        PlayerData data = null;
        MySqlDataReader reader = null;
        bool isNew = true;
        try
        {
            MySqlCommand command = new MySqlCommand(
            "select * from darkgod where account = @account", connection);
            command.Parameters.AddWithValue("account", account);
            reader = command.ExecuteReader();
            //如果通过账号获取了密码
            if (reader.Read())
            {
                //如果能够获取到, 说明不是一个新账号.
                isNew = false;
                var psw = reader.GetString("password");
                if (password.Equals(psw))
                {
                    data = new PlayerData()
                    {
                        id = reader.GetInt32("id"),
                        name = reader.GetString("name"),
                        level = reader.GetInt32("level"),
                        experience = reader.GetInt32("experience"),
                        power = reader.GetInt32("power"),
                        coin = reader.GetInt32("coin"),
                        diamond = reader.GetInt32("diamond")
                        //待添加
                    };
                }
            }
        }
        catch (Exception ex)
        {
            Common.Log("通过账号密码查询玩家数据错误:" + ex, LogType.Error);
        }
        finally
        {
            if (reader != null)
            {
                reader.Close();
            }
            if (isNew == true)
            {
                //对于在数据库中查询不到的新账号来说. 就创建一个新的账号, 
                //插入到数据库后, 在赋值到新的
                data = new PlayerData()
                {
                    id = -1,
                    name = "",
                    level = 1,
                    experience = 0,
                    power = 100,
                    coin = 1000,
                    diamond = 500
                };
                //将插入到数据库后的id返回给默认创建的玩家数据的id
                data.id = InsertPlayerData(account, password, data);
            }
        }
        return data;
    }
    /// <summary>
    /// 向玩家数据库中添加新数据, 并返回插入的数据的id.
    /// </summary>
    /// <returns>The player data id.</returns>
    /// <param name="account">Account.</param>
    /// <param name="password">Password.</param>
    /// <param name="data">Data.</param>
    public int InsertPlayerData(string account, string password, PlayerData data)
    {
        var id = -1;

        try
        {
            MySqlCommand command = new MySqlCommand(
            "insert into darkgod set account = @account, password = @password, level = @level, experience = @experience, power = @power, coin = @coin, diamond = @diamond", connection);
            command.Parameters.AddWithValue("account", account);
            command.Parameters.AddWithValue("password", password);
            command.Parameters.AddWithValue("name", data.name);
            command.Parameters.AddWithValue("level", data.level);
            command.Parameters.AddWithValue("experience", data.experience);
            command.Parameters.AddWithValue("power", data.power);
            command.Parameters.AddWithValue("coin", data.coin);
            command.Parameters.AddWithValue("diamond", data.diamond);

            command.ExecuteNonQuery();
            //返回插入的最后一条数据的id
            id = (int)command.LastInsertedId;


        }
        catch (Exception ex)
        {
            Common.Log("插入新玩家数据错误: " + ex, LogType.Error);
        }

        return id;
    }

    /// <summary>
    ///  通过用户名在数据库中查找是否存在重名的玩家信息
    /// </summary>
    /// <returns><c>true</c>, if name was queryed, <c>false</c> otherwise.</returns>
    /// <param name="name">Name.</param>
    public bool QueryName(string name)
    {
        var isExit = false;
        MySqlDataReader reader = null;
        try
        {
            MySqlCommand command = new MySqlCommand("select * from darkgod where name = @name", connection);
            command.Parameters.AddWithValue("name", name);
            reader = command.ExecuteReader();
            if (reader.Read())
            {
                isExit = true;
            }
        }
        catch (Exception ex)
        {
            Common.Log("查找用户名错误:" + ex, LogType.Error);
        }
        finally
        {
            if (reader != null)
            {
                reader.Close();
            }
        }
        return isExit;
    }

    /// <summary>
    /// 将指定的id的name更新. 更新成功时返回true.
    /// </summary>
    public bool UpdatePlayerData(int id, PlayerData data)
    {
        try
        {
            MySqlCommand command = new MySqlCommand(
            "update darkgod set name = @name, level = @level, experience = @experience, power = @power, coin = @coin, diamond = @diamond where id = @id", connection);

            command.Parameters.AddWithValue("name", data.name);
            command.Parameters.AddWithValue("level", data.level);
            command.Parameters.AddWithValue("experience", data.experience);
            command.Parameters.AddWithValue("power", data.power);
            command.Parameters.AddWithValue("coin", data.coin);
            command.Parameters.AddWithValue("diamond", data.diamond);
            command.Parameters.AddWithValue("id", data.id);

            command.ExecuteNonQuery();
        }
        catch (Exception ex)
        {
            Common.Log("更新用户名失败:" + ex, LogType.Error);
            return false;
        }
        return true;

    }
}