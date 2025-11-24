//
// Created by 15252 on 2024/1/2.
//

#include "ShellSort.h"

void ShellInsert(SqList &L, int dk) {
    //对顺序表L作一趟希尔插入排序
    //前后记录位置的增量是dk,而不是1
    //r[0]只是暂存单元，不是哨兵
    // 当j<=0时，插入位置已经找到
    for (int i = dk + 1; i <= L.length; ++i) {
        //需将L.r[i]插入有序增量子表
        if (LT(L.r[i].key, L.r[i - dk].key)) {
            L.r[0] = L.r[i];//暂存在L.r[0]
            int j;
            for (j = i - dk; j > 0 && LT(L.r[0].key, L.r[j].key); j -= dk) {
                L.r[j + dk] = L.r[j];//记录后移,查找插入位置
            }
            L.r[j + dk] = L.r[0];//插入
        }
    }
}

void ShellSort(SqList &L) {
    //生成增量序列dlta[0..t]
    int t = (int) log2(L.length + 1);
    int dlta[t];
    for (int k = 1; t >= k; ++k) {
        dlta[k - 1] = pow(2, (t - k + 1)) - 1;
    }
    //按增量序列dlta[0..t-1]对顺序表L作希尔排序
    for (int k = 0; k < t; ++k) {
        ShellInsert(L, dlta[k]);//一趟增量为dlta[k]的插入排序
    }
}