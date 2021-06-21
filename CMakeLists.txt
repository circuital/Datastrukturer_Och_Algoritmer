cmake_minimum_required(VERSION 3.19)
project(Datastrukturer_Och_Algoritmer)

set(CMAKE_CXX_STANDARD 14)

add_executable(Datastrukturer_Och_Algoritmer
        src/Stack.cpp
        src/Queue.cpp
        src/Algoritmer.cpp
        src/account_storage/account_storage.h
        src/account_storage/account_storage.cpp
        src/sort.cpp
)
