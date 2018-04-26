cmake_minimum_required(VERSION 2.8)

project (Storage)

INCLUDE_DIRECTORIES(./src)

aux_source_directory(./src SRCS)

link_libraries(boost_system pthread)

add_definitions(-std=c++11)

add_executable(memdb ${SRCS})
