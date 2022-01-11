/**
 * @file floaterror.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 打印浮点数溢出和舍入错误
 * @version 0.1
 * @date 2022-01-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void)
{
    float toobig = 3.4e38 * 100.0f;
    printf("%e\n", toobig);

    float toosmall = 3.4e-38 / 100.0f;
    printf("%e\n", toosmall);

    float a, b;
    b = 2.0e20 + 1.0;
    a = b - 2.0e20;
    printf("%f \n", a);

    return 0;
}