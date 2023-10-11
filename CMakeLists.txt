cmake_minimum_required(VERSION 3.5)

# 设置项目名称和版本号
project(utimer VERSION 1.0)

set(srcs src/utimer.c src/utimer_impl.c)
set(include_dirs include)

# 添加库
add_library(utimer STATIC ${srcs})

# 添加头文件路径
target_include_directories(utimer PUBLIC ${include_dirs})

# 添加可执行文件
add_executable(test main.c)
target_link_libraries(test utimer)
