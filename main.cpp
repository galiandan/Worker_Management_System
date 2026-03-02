#include <iostream>
#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

int main()
{
    // Worker *worker = NULL;
    // worker = new Employee(1, "zhangsan", 1);
    // worker->showInfo();
    // delete worker;

    // worker = new Manager(2, "lisi", 2);
    // worker->showInfo();
    // delete worker;

    // worker = new Boss(2, "liuwu", 3);
    // worker->showInfo();
    // delete worker;

    WorkerManager wm;
    int choice = 0;
    while (true)
    {
        wm.ShowMenu();

        std::cout << "请输入你的选择" << std::endl;
        std::cin >> choice;

        switch (choice)
        {
        case 0: // 退出管理系统
            wm.ExitSystem();
            break;
        case 1: // 增加职工信息
            break;
        case 2: // 显示职工信息
            break;
        case 3: // 删除离职员工
            break;
        case 4: // 修改职工信息
            break;
        case 5: // 查找职工信息
            break;
        case 6: // 按照编号排序
            break;
        case 7: // 清空所有档案
            break;
        default:
            system("cls");
            break;
        }
    }
}