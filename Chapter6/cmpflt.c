/**
 * @file cmpflt.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 浮点数比较方法
 * @version 0.1
 * @date 2022-01-13
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <math.h>

int main(void)
{
    const double ANSWER = 3.14159;
    double response;

    //对于浮点数1.0，在要求3位有效数据时可能为0.999，两个数值不能用==来比较，只能用差值近是判断fabs
    printf("What is the value of pi?\n");
    scanf("%lf", &response);
    while (fabs(response - ANSWER) > 0.0001)
    {
        printf("Try again!\n");
        scanf("%lf", &response);
    }
    printf("Close enough!\n");

    return 0;
}