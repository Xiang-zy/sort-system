//
// Created by 15252 on 2024/1/6.
//

#include "HeapSort.h"

void HeapAdjust(SqList &L, int s, int m) {
    //已知L.r[s..m]中记录的关键字除L.r[s].key之外均满足堆的定义,本函数调整L.r[s]的关键字,使L.r[s..m]成为一个大顶堆(对其中的关键字而言)
    RedType rc = L.r[s];
    for (int j = 2 * s; j <= m; j *= 2) {
        //沿key较大的孩子结点向下筛选
        if (j < m && LT(L.r[j].key, L.r[j + 1].key))
            ++j;//j为key较大的记录的下标
        if (!LT(rc.key, L.r[j].key))
            break;//rc应插入在位置s上
        L.r[s] = L.r[j];
        s = j;
    }
    L.r[s] = rc;//插入
}

void HeapSort(SqList &L) {
    //对顺序表L进行堆排序
    for (int i = L.length / 2; i > 0; --i) {
        HeapAdjust(L, i, L.length);
    }//把L.r[1..L.length]建成大顶堆
    for (int i = L.length; i > 1; --i) {
        L.r[0] = L.r[1];
        L.r[1] = L.r[i];
        L.r[i] = L.r[0];//将堆顶记录和当前为经排序子序列L.r[1..i]中最后一个记录相互交换
        HeapAdjust(L, 1, i - 1);//将L.r[1..i-1]重新调整为大顶堆
    }
}