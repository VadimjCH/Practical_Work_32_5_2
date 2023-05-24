cmake_minimum_required(VERSION 3.25)
project(Practical_Work_32_5_2)

set(CMAKE_CXX_STANDARD 17)

set(JSON_BuildTests OFF  INTERNAL "")

add_subdirectory(nlohmann_json)

add_executable(Practical_Work_32_5_2 main.cpp)

target_link_libraries(Practical_Work_32_5_2 PRIVATE nlohmann_json::nlohmann_json)