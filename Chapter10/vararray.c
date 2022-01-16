/**
 * @file vararray.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 变长数组
 * @version 0.1
 * @date 2022-01-16
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

#define ROWS 3
#define COLS 4

int sum2d(int rows, int cols, int arr[rows][cols]); // int sum2d(int , int , int arr[*][*]);

int main(void)
{
    int i, j;
    int rs = 3;
    int cs = 10;
    int junk[ROWS][COLS] = {{2, 4, 6, 8}, {3, 5, 7, 9}, {12, 10, 8, 6}};
    int morejunk[ROWS - 1][COLS + 2] = {{20, 30, 40, 50, 60, 70}, {5, 6, 7, 8, 9, 10}};

    int varr[rs][cs]; //变长数组
    for (i = 0; i < rs; i++)
        for (j = 0; j < cs; j++)
            varr[i][j] = i * j + j;

    printf("3x4 array\n");
    printf("Sum of all elements = %d\n", sum2d(ROWS, COLS, junk));
    printf("2x6 array\n");
    printf("Sum of all elements = %d\n", sum2d(ROWS - 1, COLS + 2, morejunk));
    printf("3x10 VLA\n");
    printf("Sum of all elements = %d\n", sum2d(rs, cs, varr));

    return 0;
}

int sum2d(int rows, int cols, int arr[rows][cols])
{
    int r, c;
    int total = 0;

    for (r = 0; r < rows; r++)
        for (c = 0; c < cols; c++)
            total += arr[r][c];

    return total;
}