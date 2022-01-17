/**
 * @file fgests.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief fputs和fgets函数
 * @version 0.1
 * @date 2022-01-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

#define STLEN 14

int main(void)
{
    char words[STLEN];

    puts("Enter a string please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Enter another string please.");
    fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Done.\n");

    return 0;
}