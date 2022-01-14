/**
 * @file wordcnt.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 统计字符数、单词数、行数
 * @version 0.1
 * @date 2022-01-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define STOP_CHAR '|'

int main(void)
{
    char ch, prev;
    long chs;
    int words, lines, parts;
    bool inWord;

    chs = 0L;
    words = lines = parts = 0;
    inWord = false;
    printf("Enter text to be analyzed(| to terminate):\n");
    while ((ch = getchar()) != STOP_CHAR)
    {
        chs++;
        if (ch == '\n')
            lines++;
        if (!isspace(ch) && !inWord)
        {
            words++;
            inWord = true;
        }
        if (isspace(ch) && inWord)
            inWord = false;
        prev = ch;
    }
    if (prev == '\n')
        parts = 1;
    printf("characters = %ld,words = %d,lines = %d,partial lines = %d\n", chs, words, lines, parts);

    return 0;
}