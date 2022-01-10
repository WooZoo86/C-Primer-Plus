/**
 * @file still_bad.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 这是一个有语义错误的程序
 * @version 0.1
 * @date 2022-01-10
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
int main(void)
{
    int n, n2, n3;

    /*下面代码有语义错误*/
    /*语义错误：即语法正确，但表达的意思或结果不对*/
    n = 5;
    n2 = n * n;
    n3 = n2 * n2;
    printf("n = %d,n squared = %d,n cubed = %d\n", n, n2, n3);

    return 0;
}