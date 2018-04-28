cmake_minimum_required(VERSION 2.8)

project (simpledb)

include_directories(./src ./3rd-party/include)
link_directories(./3rd-party/libs/brpc ./3rd-party/libs/gflags ./3rd-party/libs/leveldb)

aux_source_directory(./src SRCS)

link_libraries(brpc protobuf gflags leveldb pthread ssl crypto dl rt)

add_definitions(-std=c++11)

add_executable(memdb ${SRCS})
