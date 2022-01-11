/**
 * @file toobig.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 打印整数溢出数值
 * @version 0.1
 * @date 2022-01-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void)
{
    int max = 2147483647;
    unsigned int umax = 4294967295;
    printf("%d %d %d\n", max, max + 1, max + 2);
    printf("%u %u %u\n", umax, umax + 1, umax + 2);

    return 0;
}