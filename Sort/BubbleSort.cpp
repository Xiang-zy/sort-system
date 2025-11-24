//
// Created by 15252 on 2024/1/4.
//

#include "BubbleSort.h"

void BubbleSort(SqList &L) {
    for (int i = 0; i < L.length - 1; i++) {         // 遍历数组的次数
        for (int j = 0; j < L.length - i - 1; j++) { // 每次遍历到的结束位置逐渐减少
            if (L.r[j].key > L.r[j + 1].key) {        // 相邻元素两两对比
                // 发现元素顺序错误则进行交换
                L.r[0] = L.r[j];
                L.r[j] = L.r[j + 1];
                L.r[j + 1] = L.r[0];
            }
        }
    }


}
