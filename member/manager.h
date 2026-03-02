#pragma once
#include <iostream>
#include "worker.h"

class Manager : public Worker
{
public:
    // 空构造
    Manager();
    Manager(int, std::string, int);

    // 显示个人信息
    virtual void showInfo() override;

    // 获取岗位名称
    virtual std::string getDpetName() override;
};