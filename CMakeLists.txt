cmake_minimum_required(VERSION 3.10)

# 1. 项目定义
project(WorkerManager VERSION 1.0.0 LANGUAGES CXX)

# 2. 编译选项与标准 (整合)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

if(MSVC)
    add_compile_options(/W4 /WX)
else()
    add_compile_options(-Wall -Wextra -Werror -g)
endif()

# 3. 输出路径 (合并设置)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/lib)

# 4. 模块化管理
add_subdirectory(workerManager)
add_subdirectory(member)

# 5. 构建目标 (Target-based 关联)
add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE workerManager_lib)
target_link_libraries(${PROJECT_NAME} PRIVATE member_lib)