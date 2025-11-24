//
// Created by 15252 on 2024/1/2.
//

#ifndef C___MAINPROGRAM_H
#define C___MAINPROGRAM_H

#include "iostream"
#include "cmath"
#include "fstream"
#include "chrono"

#define LT(a, b) ((a) < (b))
#define LQ(a, b)   ((a)<=(b))
typedef struct {
    int key;//关键字项
} RedType;//记录类型

typedef struct {
    RedType *r;//r[0]闲置或用作哨兵单元
    int length;//顺序表长度
} SqList;//顺序表类型


#include "../List/List_Sq.h"
#include "../Sort/InsertSort.h"
#include "../Sort/BInsertSort.h"
#include "../Sort/ShellSort.h"
#include "../Sort/BubbleSort.h"
#include "../Sort/QuickSort.h"
#include "../Sort/SelectSort.h"
#include "../Sort/HeapSort.h"
#include "../Sort/MergeSort.h"
#include "../List/time_statistics.h"
#include "../List/TXT_Write.h"

#endif //C___MAINPROGRAM_H
