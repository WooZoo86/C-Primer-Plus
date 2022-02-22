/**
 * @file exercise.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 第11章课后习题
 * @version 0.1
 * @date 2022-01-17
 *
 * @copyright Copyright (c) 2022
 *
 */

/* 复习题
1．下面字符串的声明有什么问题？
int main(void)
{
    char name[] = {'F','e','s','s'};
}
这是一个字符数组，在最后加上'\0'才是字符串。

2．下面的程序会打印什么？
#include <stdio.h>
int main(void)
{
    char note[] = "See you at the snack bar.";
    char *ptr;

    ptr = note;
    puts(ptr);
    puts(++ptr);
    note[7]='\0';
    puts(note);
    puts(++ptr);
    return 0;
}
See you at the snack bar.
ee you at the snack bar.
See you
e you

3．下面的程序会打印什么？
#include <stdio.h>
#include <string.h>
int main(void)
{
    char food[] = "Yummy";
    char *ptr;

    ptr = food + strlen(food);
    while (--ptr >= food)
        puts(ptr);

    return 0;
}
y
my
mmy
ummy
Yummy

4．下面的程序会打印什么？
#include <stdio.h>
#include <string.h>
int main(void)
{
    char goldwyn[40] = "art of it all ";
    char samuel[40] = "I read p";
    const char *quote = "the way through.";

    strcat(goldwyn, quote);
    strcat(samuel, goldwyn);
    puts(samuel);
    return 0;
}
I read part of it all the way through.

5．下面的练习涉及字符串、循环、指针和递增指针。首先，假设定义了下面的函数：
#include <stdio.h>
char *pr(char *str)
{
    char *pc;

    pc=str;
    while (*pc)
        putchar(*pc++);
    do {
        putchar(*--pc);
    }while(pc- str);
    return (pc);
}
考虑下面的函数调用：
x= pr("HO HO HO!");
a．将打印什么？　　HO HO HO!!OH OH OH
b．x是什么类型？　　char*
c．x的值是什么？　　"HO HO HO!"第地址
d．表达式*--pc是什么意思？与--*pc有何不同？　一个是指针递减，一个是里面的字符值递减。　
e．如果用*pc--替换*--pc，会打印什么？　　HO HO HO!!OH OH O
f．两个while循环用来测试什么？　　第一个测试结尾空字符，第二个测试首地址。
g．如果pr()函数的参数是空字符串，会怎样？　　第二个循环判断条件将未知，可能会打印乱七八糟字符。
h．必须在主调函数中做什么，才能让pr()函数正常运行？不要传入空字符串。

6．假设有如下声明：
char sign = '$';
sign占用多少字节的内存？'$'占用多少字节的内存？"$"占用多少字节的内存？
sign要看实现决定可能1个或两个字节内存，'$'一个字节内存，"$"占用两个字节。

7．下面的程序会打印出什么？
#include <stdio.h>
#include <string.h>

#define M1 "How are ya, sweetie? "
char M2[40] = "Beat the clock.";
char *M3 = "chat";

int main(void)
{
    char words[80];
    printf(M1);
    puts(M1);
    puts(M2);
    puts(M2 + 1);
    strcpy(words, M2);
    strcat(words, " Win a toy");
    puts(words);
    words[4] = '\0';
    puts(words);
    while (*M3)
        puts(M3++);
    puts(--M3);
    puts(--M3);
    M3 = M1;
    puts(M3);

    return 0;
}
How are ya, sweetie? How are ya, sweetie?
Beat the clock.
eat the clock.
Beat the clock. Win a toy
Beat
chat
hat
at
t
t
at
How are ya, sweetie?

8．下面的程序会打印出什么？
#include <stdio.h>

int main(void)
{
    char str1[] = "gawsie";
    char str2[] = "bletonism";
    char *ps;
    int i = 0;

    for (ps = str1; *ps != '\0'; ps++)
    {
        if (*ps == 'a' || *ps == 'e')
            putchar(*ps);
        else
            (*ps)--;
        putchar(*ps);
    }
    putchar('\n');
    while (str2[i] != '\0')
    {
        printf("%c", i % 3 ? str2[i] : '*');
        ++i;
    }

    return 0;
}
faavrhee
*le*on*sm

9．本章定义的s_gets()函数，用指针表示法代替数组表示法便可减少一个变量i。请改写该函数。
char *s_gets(char *st, int n)
{
    char *ret;

    ret = fgets(st, n, stdin);
    if (ret)
    {
        while (*st != '\n' && *st != '\0')
            st++;
        if ('\n' == *st)
            *st = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret;
}

10．strlen()函数接受一个指向字符串的指针作为参数，并返回该字符串的长度。请编写一个这样的函数。
int str_len(const char *str)
{
    int i=0;
    while(*str++)
        i++;

    return i;
}

11．本章定义的s_gets()函数，可以用strchr()函数代替其中的while循环来查找换行符。请改写该函数。
char *s_gets(char *st, int n)
{
    char *ret;
    char *pos;

    ret = fgets(st, n, stdin);
    if (ret)
    {
        pos=strchr(st,'\n');
        if (pos)
            *pos = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret;
}

12．设计一个函数，接受一个指向字符串的指针，返回指向该字符串第1个空格字符的指针，或如果未找到空格字符，则返回空指针。
char* space(const char* str)
{
    char *pos;

    pos=strchr(str,' ');
    return pos?pos:NULL;
}

13．重写程序清单11.21，使用ctype.h头文件中的函数，以便无论用户选择大写还是小写，该程序都能正确识别答案。
char* str_lower(char* str)
{
    char* temp=str;
    while(*temp)
    {
        *temp=tolower(*temp);
        temp++;
    }
    return str;
}
#include <stdio.h>
#include <string.h>

#define ANSWER "Grant"
#define SIZE 40
char *s_gets(char *st, int n);

int main(void)
{
    char try[SIZE];
    char ans[SIZE];

    puts("Who is buried in Grant's tomb?");
    s_gets(try, SIZE);
    strcpy(ans, ANSWER);
    str_lower(ans);
    while (strcmp(str_lower(try), ans) != 0)
    {
        puts("No,that's wrong. Try again.");
        s_gets(try, SIZE);
    }
    puts("That's right!");

    return 0;
}
*/

/* 编程练习 */
#include <stdio.h>
#include <string.h>

void exercise_1(void);

int main(void)
{
    exercise_1();
    return 0;
}

void func_1(char *str, int n)
{
    while (n--)
    {
        *str++ = getchar();
    }
}

void exercise_1(void)
{
    // 1．设计并测试一个函数，从输入中获取n个字符（包括空白、制表符、换行符），把结果存储在一个数组里，它的地址被传递作为一个参数。
    const int n = 10;
    char str[n + 1] = {'\0'};
    func_1("str", n);
}