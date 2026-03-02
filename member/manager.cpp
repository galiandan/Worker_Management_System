#include "manager.h"

// 构造
Manager::Manager(int Id, std::string name, int dId)
{
    this->m_Id = Id;
    this->m_Name = name;
    this->m_DeptId = dId;
}

// 显经理人信息
void Manager::showInfo()
{
    std::cout << "职工编号:" << this->m_Id
              << "\t职工姓名:" << this->m_Name
              << "\t岗位:" << this->getDpetName()
              << "\t岗位职责：完成经理交给的任务，并下发给员工" << std::endl;
}

// 获取岗位名称
std::string Manager::getDpetName()
{
    return std::string("经理");
}
