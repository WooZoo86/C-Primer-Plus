/**
 * @file constp
 * @author WooZoo86 (271005887@qq.com)
 * @brief 通过非const指针修改const数据
 * @version 0.1
 * @date 2022-01-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

int main(void)
{
    const int n = 13;
    const int **p2;
    int *p1;

    p2 = &p1;
    *p2 = &n;
    *p1 = 10;
    printf("n = %d\n", n); //部分系统允许修改n的值

    return 0;
}
