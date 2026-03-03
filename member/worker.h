#pragma once
#include <iostream>
#include <string>

class Worker
{
public:
    // 显示个人信息
    virtual void showInfo() = 0;

    // 获取岗位名称
    virtual std::string getDpetName() = 0;

    // 获得个人ID
    virtual int getId() = 0;

    // 获得个人名字
    virtual std::string getName() = 0;

    // 虚析构
    virtual ~Worker()
    {
    }

protected:
    int m_Id;           // 个人ID
    std::string m_Name; // 个人名字
    int m_DeptId;       // 部门编号
};