#ifndef USER_H
#define USER_H
#include <string>
using namespace std;
//匹配User表的映射类
class User
{
public:
    User(int Id = -1, string Name = "", string pwd = "", string State = "offline")
    {
        id = Id;
        name = Name;
        password = pwd;
        state = State;
    }
    void setId(int id)
    {
        this->id = id;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setPwd(string pwd)
    {
        this->password = pwd;
    }
    void setState(string state)
    {
        this->state = state;
    }
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    string getPwd()
    {
        return password;
    }
    string getState()
    {
        return state;
    }

private:
    int id;
    string name;
    string password;
    string state; // 当前登录状态
};

#endif