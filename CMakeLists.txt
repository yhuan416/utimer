cmake_minimum_required(VERSION 3.5)

# 设置项目名称和版本号
project(utimer VERSION 1.0)

set(srcs src/utimer.c src/utimer_impl.c)
set(include_dirs include)

if(ESP_PLATFORM)
    # 添加esp-idf组件
    idf_component_register(SRCS ${srcs}
                            INCLUDE_DIRS ${include_dirs})
else()
    # 添加库
    add_library(utimer STATIC ${srcs})

    # 添加头文件路径
    target_include_directories(utimer PUBLIC ${include_dirs})

    # 添加示例
    add_subdirectory(example)
endif()
