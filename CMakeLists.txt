cmake_minimum_required(VERSION 3.5)

set(include_dirs include)

if(ESP_PLATFORM)

set(srcs src/utimer.c src/utimer_esp_impl.c)

idf_component_register(SRCS ${srcs}
                        INCLUDE_DIRS ${include_dirs}
                        PRIV_REQUIRES esp_timer)

else()

project(utimer)

set(srcs src/utimer.c src/utimer_impl.c)

add_library(utimer STATIC ${srcs})
target_include_directories(utimer PUBLIC ${include_dirs})

add_subdirectory(example)

endif()
