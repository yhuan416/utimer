cmake_minimum_required(VERSION 3.5)

set(srcs src/utimer.c src/utimer_impl.c)
set(include_dirs include)

if(ESP_PLATFORM)

# 添加esp-idf组件
idf_component_register(SRCS ${srcs}
                        INCLUDE_DIRS ${include_dirs})

else()

project(utimer)

add_library(utimer STATIC ${srcs})
target_include_directories(utimer PUBLIC ${include_dirs})

add_subdirectory(example)

endif()
