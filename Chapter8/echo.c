/**
 * @file echo.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 重复输入，测试流结束符
 * @version 0.1
 * @date 2022-01-15
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

int main(void)
{
    int ch;

    // ctr+z or ctrl+d
    while ((ch = getchar()) != EOF)
        putchar(ch);

    return 0;
}