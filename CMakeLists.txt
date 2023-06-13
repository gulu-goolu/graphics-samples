cmake_minimum_required(VERSION 3.26)

project(graphics-samples VERSION 0.0.1)

# 设置全局的编译选项
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# 导入第三方库
include(third_party.cmake)

include_directories(${CMAKE_SOURCE_DIR})

add_subdirectory(framework)
add_subdirectory(samples)