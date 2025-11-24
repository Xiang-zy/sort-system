//
// Created by 15252 on 2024/1/4.
//


#include "TXT_Write.h"


void WriteArrayToFile(const char *filename, const SqList &L) {

    if (L.r == nullptr || L.length <= 0) {
        std::cerr << "The order table is not initialized or is empty" << std::endl;
        return;
    }// 首先检查顺序表是否为空或未初始化
    FILE *fp;
    fp = fopen(filename, "w");
    // 尝试打开文件，如果失败则输出错误信息
    if (fp == NULL) {
        std::cout << "Unable to open file." << std::endl;
        return;
    }
    // 遍历顺序表中的每个元素
    for (int i = 1; i <= L.length; i++) {
        if ((i - 1) % 20 == 0 && i != 1)// 每20个数值换行
            fprintf(fp, "\n");
        fprintf(fp, "%-10d", L.r[i].key);// 将每个元素按照指定格式写入文件
    }
    fclose(fp);// 关闭文件
}