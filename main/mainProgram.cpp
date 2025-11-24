//
// Created by 15252 on 2024/1/2.
//
#include "mainProgram.h"
#include <iostream>

using namespace std;
using namespace chrono;

int main() {
    SqList L;
    int Number, choice;
    while (true) {
        cout << "Enter a positive integer:";
        //确保输入的数为正整数
        while (true) {
            cin >> Number;
            if (Number <= 0) {
                cout << "Your input is wrong, please re-enter a positive integer:";
            } else
                break;
        }
        cout << "The generated random numbers are:" << endl;
        InitList_Sq(L, Number);//顺序表的生成
        rand_num(Number, L);//生成随机数
        if (Number <= 500)
            for (int i = 1; i <= Number; i++)
                cout << L.r[i].key << ' ';
        else {
            cout << "file: random_numbers.txt";
            WriteArrayToFile("../output/random_numbers.txt", L);//生成地随机数储存在文件

        }
        while (true) {
            cout << endl << "Choose a sort:" << endl <<
                 "\t0.Regenerates random sets of numbers\n"
                 "\t1.InsertSort\n"
                 "\t2.BInsertSort\n"
                 "\t3.ShellSort\n"
                 "\t4.BubbleSort\n"
                 "\t5.QuickSort\n"
                 "\t6.SelectSort\n"
                 "\t7.HeapSort\n"
                 "\t8.MergeSort\n"
                 "\t9.Use all sorts and time them."
                 << endl;
            cin >> choice;
            auto start = system_clock::now();//计时开始
            switch (choice) {
                case 0:
                    break;
                case 1:
                    InsertSort(L);//直接插入排序
                    break;
                case 2:
                    BInsertSort(L);//折半插入排序
                    break;
                case 3:
                    ShellSort(L);//希尔排序
                    break;
                case 4:
                    BubbleSort(L);//冒泡排序
                    break;
                case 5:
                    QuickSort(L);//快速排序
                    break;
                case 6:
                    SelectSort(L);//简单选择排序
                    break;
                case 7:
                    HeapSort(L);//堆排序
                    break;
                case 8:
                    MergeSort(L);//归并排序
                    break;
                case 9:
                    time_statistics(L);//排序计时
                    break;
                default:
                    cout << "Your input is wrong, please re-enter.";
                    choice = -1;
            }
            auto end = system_clock::now();//计时结束

            if (choice == 0)break;
            if (choice == 9)continue;
            if (choice != -1) {

                std::chrono::duration<double> runtime{end - start};
                std::cout << "Cost time:" << runtime.count() << std::endl;//花费时间
                if (Number < 200) {
                    cout << "Sort results:" << endl;
                    for (int i = 1; i <= Number; i++)
                        cout << L.r[i].key << ' ';
                    cout << endl << "success." << endl;//排序结果直接输出
                } else {
                    cout<<"Sort results are in file:sorted_numbers.txt"<<endl;
                    WriteArrayToFile("../output/sorted_numbers.txt", L);//排序结果储存在文件
                }
            }
        }
    }
}


