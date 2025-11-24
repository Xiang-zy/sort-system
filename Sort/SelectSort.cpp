//
// Created by 15252 on 2024/1/4.
//

#include "SelectSort.h"

int SelectMinKey(SqList &L, int i) {
    //在L.r[i..L.length]中选择key最小的记录
    L.r[0].key = i;
    for (int j = i; j <= L.length; ++j) {
        if (L.r[j].key < L.r[L.r[0].key].key) L.r[0].key = j;
    }
    return L.r[0].key;
}


void SelectSort(SqList &L) {
    //对顺便表L作简单选择排序
    for (int i = 1; i < L.length; ++i) {
        //选择第i小的记录,并交换到位
        int j = SelectMinKey(L, i);//在L.r[i..L.length]中选择key最小的记录
        if (i != j) {
            L.r[0] = L.r[i];
            L.r[i] = L.r[j];
            L.r[j] = L.r[0];
        }//与第i个记录交换
    }
}