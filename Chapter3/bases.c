/**
 * @file bases.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 以十进制、八进制、十六进制打印100
 * @version 0.1
 * @date 2022-01-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void)
{
    int num = 100;
    printf("dec = %d,octal = %o,hex = %x\n", num, num, num);
    printf("dec = %d,octal = %#o,hex = %#x\n", num, num, num); //显示进制前缀

    return 0;
}