//
// Created by 15252 on 2024/1/2.
//

#include "BInsertSort.h"

void BInsertSort(SqList &L) {
    //对顺序表作折半插入排序
    for (int i = 2; i <= L.length; ++i) {
        L.r[0] = L.r[i];//将L.r[i]暂存到L.r[0]
        int low = 1;
        int high = i - 1;
        //在r[low..high]中折半查找有序插入的位置
        while (low <= high) {
            int m = (low + high) / 2;//折半
            if (LT(L.r[0].key, L.r[m].key))
                high = m - 1;//插入点在低半区
            else
                low = m + 1;//插入点在高半区
        }
        for (int j = i - 1; j >= high + 1; --j) {
            L.r[j + 1] = L.r[j];
        }//记录后移
        L.r[high + 1] = L.r[0];//插入
    }
}