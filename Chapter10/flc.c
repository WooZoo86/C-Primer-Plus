/**
 * @file flc.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 复合字面量
 * @version 0.1
 * @date 2022-01-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

#define COLS 4

int sum2d(const int ar[][COLS], int rows);
int sum(const int ar[], int n);

int main(void)
{
    int total1, total2, total3;
    int *pt1;
    int(*pt2)[COLS];

    pt1 = (int[2]){10, 20};
    pt2 = (int[2][COLS]){{1, 2, 3, -9}, {4, 5, 6, -8}};
    total1 = sum(pt1, 2);
    total2 = sum2d(pt2, 2);
    total3 = sum((int[]){4, 4, 4, 5, 5, 5}, 6);
    printf("total1 = %d, total2 = %d, total3 = %d\n", total1, total2, total3);

    return 0;
}

int sum2d(const int ar[][COLS], int rows)
{
    int r, c;
    int total = 0;

    for (r = 0; r < rows; r++)
        for (c = 0; c < COLS; c++)
            total += ar[r][c];

    return total;
}

int sum(const int ar[], int n)
{
    int i;
    int total = 0;

    for (i = 0; i < n; i++)
        total += ar[i];

    return total;
}
