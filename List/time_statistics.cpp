//
// Created by 15252 on 2024/1/6.
//

#include "time_statistics.h"

void time_statistics(SqList &L) {
    std::cout <<
              "\t1.InsertSort\n"
              "\t2.BInsertSort\n"
              "\t3.ShellSort\n"
              "\t4.BubbleSort\n"
              "\t5.QuickSort\n"
              "\t6.SelectSort\n"
              "\t7.HeapSort\n"
              "\t8.MergeSort\n"
              "Sorting time:" << std::endl;

    SqList LI = L;
    auto start = std::chrono::system_clock::now();
    InsertSort(LI);
    auto end = std::chrono::system_clock::now();
    std::chrono::duration<double> runtime{end - start};
    std::cout << runtime.count() << std::endl;

    LI = L;
    start = std::chrono::system_clock::now();
    BInsertSort(LI);
    end = std::chrono::system_clock::now();
    runtime = end - start;
    std::cout << runtime.count() << std::endl;

    LI = L;
    start = std::chrono::system_clock::now();
    ShellSort(LI);
    end = std::chrono::system_clock::now();
    runtime = end - start;
    std::cout << runtime.count() << std::endl;


    LI = L;
    start = std::chrono::system_clock::now();
    BubbleSort(LI);
    end = std::chrono::system_clock::now();
    runtime = end - start;
    std::cout << runtime.count() << std::endl;


    LI = L;
    start = std::chrono::system_clock::now();
    QuickSort(LI);
    end = std::chrono::system_clock::now();
    runtime = end - start;
    std::cout << runtime.count() << std::endl;


    LI = L;
    start = std::chrono::system_clock::now();
    SelectSort(LI);
    end = std::chrono::system_clock::now();
    runtime = end - start;
    std::cout << runtime.count() << std::endl;

    LI = L;
    start = std::chrono::system_clock::now();
    HeapSort(LI);
    end = std::chrono::system_clock::now();
    runtime = end - start;
    std::cout << runtime.count() << std::endl;

    LI = L;
    start = std::chrono::system_clock::now();
    MergeSort(LI);
    end = std::chrono::system_clock::now();
    runtime = end - start;
    std::cout << runtime.count() << std::endl;
}

