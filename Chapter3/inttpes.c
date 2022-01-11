/**
 * @file inttpes.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 打印整数的其它类型
 * @version 0.1
 * @date 2022-01-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main(void)
{
    int x = 1234;
    //一下都是有符号整数，类似的还有无符号u开头类型，例如uint32_t
    int32_t y = 1234;
    int_least32_t z = 1234;
    int_fast32_t i = 1234;
    intmax_t j = 1234;
    //有符号打印格式PRId32，还有无符号打印格式PRIu32，以及各种进制打印方式PRIx32
    printf("int = %d,int32_t = %" PRId32 ",int_least32_t = %" PRIdLEAST32 ",int_fast32_t = %" PRIdFAST32 ",intmax_t = %" PRIdMAX "\n", x, y, z, i, j);

    return 0;
}