cmake_minimum_required(VERSION 3.20)
project(DataStructure C)

set(CMAKE_C_STANDARD 99)

include_directories(.)

add_executable(DataStructure
        scripts/array_list.c
        scripts/array_list.h
        scripts/heap.c
        scripts/heap.h
        main.c
        scripts/queue.c
        scripts/queue.h
        scripts/stack.c
        scripts/stack.h
        tests/tests.c
        tests/tests.h)

