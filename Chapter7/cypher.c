/**
 * @file cypher.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief   更改输入字符，空格不变
 * @version 0.1
 * @date 2022-01-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

#define SPACE_CHAR ' '

int main(void)
{
    char ch;

    printf("Enter a line letter: ");
    while ((ch = getchar()) != '\n')
    {
        if (ch == SPACE_CHAR)
            putchar(ch);
        else
            putchar(ch + 1);
    }
    putchar(ch);

    return 0;
}