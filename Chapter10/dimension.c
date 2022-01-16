/**
 * @file dimension.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 多维数组指针访问数组
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
    int(*pZippo)[2]; //与int* pZippo[2];的区别

    pZippo = zippo;
    printf("pZippo = %p,pZippo+1=%p\n", pZippo, pZippo + 1);
    printf("pZippo[0] = %p,pZippo[0]+1 = %p\n", pZippo[0], pZippo[0] + 1);
    printf("*pZippo = %p,*pZippo+1=%p\n", *pZippo, *pZippo + 1);
    printf("pZippo[0][0] = %d\n", pZippo[0][0]);
    printf("*pZippo[0] = %d\n", *pZippo[0]);
    printf("**pZippo = %d\n", **pZippo);
    printf("pZippo[2][1]=%d\n", pZippo[2][1]);
    printf("*(*(pZippo+2)+1) = %d\n", *(*(pZippo + 2) + 1));

    return 0;
}