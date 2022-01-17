/**
 * @file strptr.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 把字符串看作指针
 * @version 0.1
 * @date 2022-01-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

int main(void)
{
    printf("string = %s,pointer = %p,first char = %c\n", "We", "are", *"space fares");

    return 0;
}