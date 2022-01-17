/**
 * @file address.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief   字符串地址
 * @version 0.1
 * @date 2022-01-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

#define MSG "I am special"

int main(void)
{
    char msg[] = MSG;
    const char *ptr = MSG;

    printf("address of \"I am special\": %p\n", "I am special"); //相同的字符串编译器只保存一份
    printf("address msg: %p\n", msg);
    printf("address ptr: %p\n", ptr);
    printf("address MSG: %p\n", MSG);
    printf("address of \"I am special\": %p\n", "I am special");

    return 0;
}