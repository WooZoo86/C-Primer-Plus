/**
 * @file recur.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 演示递归函数调用
 * @version 0.1
 * @date 2022-01-15
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

void up_and_down(int);

int main(void)
{
    up_and_down(1);
    return 0;
}

void up_and_down(int n)
{
    printf("Level %d: n location %p\n\n", n, &n);
    if (n < 4)
        up_and_down(n + 1);
    printf("LEVEL %d: n location %p\n\n", n, &n);
}