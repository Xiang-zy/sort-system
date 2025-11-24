cmake_minimum_required(VERSION 3.26)
project(2200204108_Xiang_Zhaoyang_Sort)

set(CMAKE_CXX_STANDARD 17)

add_executable(2200204108_Xiang_Zhaoyang_Sort
        main/mainProgram.cpp
        main/mainProgram.h
        List/List_Sq.cpp
        List/List_Sq.h
        List/TXT_Write.cpp
        List/TXT_Write.h
        List/time_statistics.cpp
        List/time_statistics.h
        Sort/InsertSort.cpp
        Sort/InsertSort.h
        Sort/BInsertSort.cpp
        Sort/BInsertSort.h
        Sort/ShellSort.cpp
        Sort/ShellSort.h
        Sort/BubbleSort.cpp
        Sort/BubbleSort.h
        Sort/QuickSort.cpp
        Sort/QuickSort.h
        Sort/SelectSort.cpp
        Sort/SelectSort.h
        Sort/HeapSort.cpp
        Sort/HeapSort.h
        Sort/MergeSort.cpp
        Sort/MergeSort.h
)
