/**
 * @file typesize.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 打印数据类型大小
 * @version 0.1
 * @date 2022-01-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <complex.h>

int main(void)
{
    //C99类型大小格式符号为%zd，其它标准可以用%u,%lu代替
    printf("Type int has a size of %zd bytes.\n", sizeof(int));
    printf("Type char has a size of %zd bytes.\n", sizeof(char));
    printf("Type long has a size of %zd bytes.\n", sizeof(long int));           //32位4字节 64位8字节
    printf("Type long long has a size of %zd bytes.\n", sizeof(long long int)); //32位8字节 64位8字节
    printf("Type float has a size of %zd bytes.\n", sizeof(float));
    printf("Type double has a size of %zd bytes.\n", sizeof(double));
    printf("Type long double has a size of %zd bytes.\n", sizeof(long double));
    printf("Type _Bool has a size of %zd bytes.\n", sizeof(_Bool));
    printf("Type float _Complex has a size of %zd bytes.\n", sizeof(float _Complex));

    return 0;
}