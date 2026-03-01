#pragma once
#include <iostream>
#include "worker.h"

class Employee : public Worker
{
public:
    // 空构造
    Employee();
    Employee(int, std::string, int);

    // 显示个人信息
    virtual void showInfo() override;

    // 获取岗位名称
    virtual std::string getDpetName() override;
};