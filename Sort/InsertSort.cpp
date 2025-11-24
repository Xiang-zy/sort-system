//
// Created by 15252 on 2024/1/2.
//

#include "InsertSort.h"

void InsertSort(SqList &L) {
    //对顺序表作直接插入排序
    for (int i = 2; i <= L.length; ++i) {
        //“<”,需将L.r[i]插入有序子表
        if (LT(L.r[i].key, L.r[i - 1].key)) {
            L.r[0] = L.r[i];//复制为哨兵
            L.r[i] = L.r[i - 1];
            int j;
            for (j = i - 2; LT(L.r[0].key, L.r[j].key); --j) {
                L.r[j + 1] = L.r[j];//记录后移
            }
            L.r[j + 1] = L.r[0];//插入到正确位置
        }
    }
}