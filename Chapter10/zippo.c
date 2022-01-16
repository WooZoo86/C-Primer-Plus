/**
 * @file zippo.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 显示数组地址值和数组内容
 * @version 0.1
 * @date 2022-01-16
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <stdio.h>

int main(void)
{
    int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};

    printf("zippo = %p,zippo+1=%p\n", zippo, zippo + 1);
    printf("zippo[0] = %p,zippo[0]+1 = %p\n", zippo[0], zippo[0] + 1);
    printf("*zippo = %p,*zippo+1=%p\n", *zippo, *zippo + 1);
    printf("zippo[0][0] = %d\n", zippo[0][0]);
    printf("*zippo[0] = %d\n", *zippo[0]);
    printf("**zippo = %d\n", **zippo);
    printf("zippo[2][1]=%d\n", zippo[2][1]);
    printf("*(*(zippo+2)+1) = %d\n", *(*(zippo + 2) + 1));

    return 0;
}