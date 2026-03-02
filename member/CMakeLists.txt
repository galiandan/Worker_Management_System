# 1. 直接定义库并列出文件
add_library(member_lib STATIC 
    employee.cpp
    employee.h
    manager.h
    manager.cpp
    boss.h
    boss.cpp
    worker.h
)

# 2. 设置包含目录
# 使用 '.' 代表当前目录，PUBLIC 确保根项目也能找到这里的头文件
target_include_directories(member_lib PUBLIC .)