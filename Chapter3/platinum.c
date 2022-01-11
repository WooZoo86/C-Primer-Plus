/**
 * @file platinum.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 重量转换成等价白金数量
 * @version 0.1
 * @date 2022-01-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>

int main(void)
{
    float weight, value;

    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds: ");

    //获取用户输入
    scanf("%f", &weight);
    //2022-01-11白金价格是每盎司$947.53，14.5833用于把英镑常衡盎司转换为金衡盎司
    value = 947.53 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f.\n", value);
    printf("You are easily worth that! If platinum prices drop,\n");
    printf("eat more to maintain your value.\n");

    return 0;
}