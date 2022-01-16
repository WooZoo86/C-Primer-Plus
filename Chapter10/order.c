/**
 * @file order.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 指针运算中的优先级
 * @version 0.1
 * @date 2022-01-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

int data[2] = {100, 200};
int moredata[2] = {300, 400};

int main(void)
{
    int *p1, *p2, *p3;

    p1 = p2 = data;
    p3 = moredata;
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);
    printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d\n", *p1++, *++p2, (*p3)++);
    printf("*p1 = %d, *p2 = %d, *p3 = %d\n", *p1, *p2, *p3);

    return 0;
}