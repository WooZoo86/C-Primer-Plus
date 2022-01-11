/**
 * @file float.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 打印不同格式的浮点数
 * @version 0.1
 * @date 2022-01-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void)
{
    float aboat = 32000.0;
    double abet = 2.14e9;
    long double dip = 5.32e-5;

    printf("%f can be written %e\n", aboat, aboat);
    //下一行要求编译器支持C99或其中的相关特性
    printf("And it's %a in hexadecimal,powers of 2 notation\n", aboat);
    printf("%f can be written %e\n", abet, abet);
    printf("%Lf can be written %Le\n", dip, dip);

    return 0;
}