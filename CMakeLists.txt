cmake_minimum_required(VERSION 2.8)

project (simpledb)

include_directories(./src ./3rd-party/include)
link_directories(./3rd-party/libs/brpc ./3rd-party/libs/protobuf)

aux_source_directory(./src SRCS)

link_libraries(pthread brpc protobuf)

add_definitions(-std=c++11)

add_executable(memdb ${SRCS})
