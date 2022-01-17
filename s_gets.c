/**
 * @file s_gets.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief   取整行输入并用空字符代替换行符，或者读取一部分输入，并丢弃其余部分。
 * @version 0.1
 * @date 2022-01-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

char *s_gets(char *st, int n)
{
    char *ret;
    int i = 0;

    ret = fgets(st, n, stdin);
    if (ret)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if ('\n' == st[i])
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret;
}

int main(void)
{
    char st[10];

    if (s_gets(st, 10))
        puts(st);

    return 0;
}