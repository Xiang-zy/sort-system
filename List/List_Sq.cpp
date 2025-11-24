//
// Created by 15252 on 2024/1/4.
//

#include "List_Sq.h"


int InitList_Sq(SqList &L, int number) {
    //构造一个空的顺序表L
    L.r = new RedType[number + 1];
    if (!L.r) {
        std::cout << "初始化错误";
        return 0;
    }
    L.length = 0; //空表长度为0
    return 1;
}


void rand_num(int Number, SqList &L) {
    // 设置种子
    srand((unsigned) time(NULL));

    /* 生成 number 个随机数 */
    for (int i = 1; i <= Number; i++) {
        // 生成实际的随机数
        L.r[i].key = rand();
        L.length++;

    }
//    std::cout<<L.length<<std::endl;
}