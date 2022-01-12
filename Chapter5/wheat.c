/**
 * @file wheat.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 测试乘法作为指数增长
 * @version 0.1
 * @date 2022-01-12
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

#define SQUARES 64 //棋盘中方格数量
int main(void)
{
    const double WORLD_WHEAT = 2E16;
    double current, total;
    int count = 1;

    printf("square      grains      total       ");
    printf("fraction of \n");
    printf("            added       grains      ");
    printf("world total\n");
    total = current = 1.0; //从1粒小麦开始
    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / WORLD_WHEAT);
    while (count < SQUARES)
    {
        count = count + 1;
        current = 2 * current; //数量翻倍
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total / WORLD_WHEAT);
    }
    printf("That is all.\n");

    return 0;
}