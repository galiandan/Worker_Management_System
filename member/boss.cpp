#include "boss.h"

// 构造
Boss::Boss(int Id, std::string name, int dId)
{
    this->m_Id = Id;
    this->m_Name = name;
    this->m_DeptId = dId;
}
// 显经理人信息
void Boss::showInfo()
{
    std::cout << "职工编号:" << this->m_Id
              << "\t职工姓名:" << this->m_Name
              << "\t岗位:" << this->getDpetName()
              << "\t岗位职责：管理公司的全部事物" << std::endl;
}

// 获取岗位名称
std::string Boss::getDpetName()
{
    return std::string("经理");
}

// 获取个人ID
int Boss::getId()
{
    return this->m_Id;
}

// 获取个人名字
std::string Boss::getName()
{
    return this->m_Name;
}