/**
 * @file two_func.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 一个文件中包含两个函数
 * @version 0.1
 * @date 2022-01-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <stdio.h>
void butler(void); /*函数原型*/
int main(void)
{
    printf("I will summon the butler function.\n");
    butler(); /*调用函数*/
    printf("Yes,Bring me some tea and writeable DVDs.\n");

    return 0;
}

void butler(void) /*函数定义*/
{
    printf("You rang,Sir?\n");
}