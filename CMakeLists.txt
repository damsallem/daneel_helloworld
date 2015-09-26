cmake_minimum_required(VERSION 3.0)
set(CMAKE_BUILD_TYPE Release)

project(HelloWorldDamsallem)
add_executable(${PROJECT_NAME} main.cpp helloworld_damsallem_handler.cpp)

# For C++11 functionnalities
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

#Linking libraries
target_link_libraries(${PROJECT_NAME} -pthread
                                      -lboost_filesystem -lboost_regex -lboost_system
                                      -lPocoNet -lPocoUtil -lPocoFoundation
                                      -ldaneel)

