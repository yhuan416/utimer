cmake_minimum_required(VERSION 3.5)

# 添加可执行文件
add_executable(example main.c)
target_link_libraries(example utimer)
