//
// Created by 15252 on 2024/1/4.
//

#include "QuickSort.h"

int Partition(SqList &L, int low, int high) {
    //交换顺序表L中子表L.r[low..high]中的记录,枢轴记录到位,并返回其所在的位置,此时在它之前(后)的记录均不大(小)于它.
    L.r[0] = L.r[low];//用子表的第一个记录作枢轴记录
    int pivotkey = L.r[low].key;//枢轴记录关键字
    //从表的两端交替地向中间扫描
    while (low < high) {
        while (low < high && L.r[high].key >= pivotkey) {
            --high;
        }//将比枢轴记录小的记录移到低端
        L.r[low] = L.r[high];
        while (low < high && L.r[low].key <= pivotkey) {
            ++low;
        }
        L.r[high] = L.r[low];
    }//将比枢轴记录大的记录移到高端
    L.r[low] = L.r[0];//枢轴记录到位
    return low;//返回枢轴位置
}

void QSort(SqList &L, int low, int high) {
    //对顺序表L中的子序列L.r[low..high]作快速排序
    if (low < high) {//长度大于1
        int pivotloc = Partition(L, low, high);//将L.r[low..high]一分为二
        QSort(L, low, pivotloc - 1);//对低子表递归排序,pivotloc是枢轴位置
        QSort(L, pivotloc + 1, high);//对高子表递归排序
    }
}

void QuickSort(SqList &L) {
    //对顺序表L作快速排序
    QSort(L, 1, L.length);
}