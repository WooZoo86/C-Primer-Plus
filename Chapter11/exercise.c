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
#include <ctype.h>

void exercise_1(void);
void exercise_2(void);
void exercise_3(void);
void exercise_4(void);
void exercise_5(void);
void exercise_6(void);
void exercise_7(void);
void exercise_8(void);
void exercise_9(void);
void exercise_10(void);
void exercise_11(void);

int main(void)
{
    // exercise_1();
    // exercise_2();
    // exercise_3();
    // exercise_4();
    // exercise_5();
    // exercise_6();
    // exercise_7();
    // exercise_8();
    // exercise_9();
    // exercise_10();
    exercise_11();

    return 0;
}

void func_1(char *str, int n)
{
    while (n--)
        *str++ = getchar();
}

void exercise_1(void)
{
    // 1．设计并测试一个函数，从输入中获取n个字符（包括空白、制表符、换行符），把结果存储在一个数组里，它的地址被传递作为一个参数。
    const int n = 10;
    char str[n + 1] = {'\0'};

    printf("Enter %d characters:\n", n);
    func_1(str, n);
    printf("str=%s,len=%zd\n", str, strlen(str));
}

void func_2(char *str, int n)
{
    if (isspace(getchar()))
        return;
    while (n--)
        *str++ = getchar();
}

void exercise_2(void)
{
    // 2．修改并编程练习1的函数，在n个字符后停止，或在读到第1个空白、制表符或换行符时停止，哪个先遇到哪个停止。不能只使用scanf()。
    const int n = 10;
    char str[n + 1] = {'\0'};

    printf("Enter %d characters or spaces to exit:\n", n);
    func_2(str, n);
    printf("str=%s,len=%zd\n", str, strlen(str));
}

void func_3(char *str, int n)
{
    int ch;
    while (isspace(ch = getchar()))
        ;
    *str++ = ch;
    n--;
    while (n-- && isalpha(ch = getchar()))
        *str++ = ch;
    while (ch != '\n')
        ch = getchar();
}

void exercise_3(void)
{
    // 3．设计并测试一个函数，从一行输入中把一个单词读入一个数组中，并丢弃输入行中的其余字符。该函数应该跳过第1个非空白字符前面的所有空白。将一个单词定义为没有空白、制表符或换行符的字符序列。
    const int n = 10;
    char str[n + 1] = {'\0'};

    printf("Enter %d characters or a word:\n", n);
    func_3(str, n);
    printf("str=%s,len=%zd\n", str, strlen(str));
}

void exercise_4(void)
{
    // 4．设计并测试一个函数，它类似编程练习3的描述，只不过它接受第2个参数指明可读取的最大字符数。
    const int n = 10;
    char str[n + 1] = {'\0'};

    printf("Enter %d characters or a word:\n", n);
    func_3(str, n);
    printf("str=%s,len=%zd\n", str, strlen(str));
}

char *func_5(char *str, int target)
{
    int ch;
    while ((ch = *str) && ch != target)
        str++;
    return ch ? str : NULL;
}

void exercise_5(void)
{
    // 5．设计并测试一个函数，搜索第1个函数形参指定的字符串，在其中查找第2个函数形参指定的字符首次出现的位置。如果成功，该函数返指向该字符的指针，
    //如果在字符串中未找到指定字符，则返回空指针（该函数的功能与strchr()函数相同）。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
    char str[255] = {'\0'};
    char *pos = NULL;
    char ch;

    puts("Enter a string and a character to search for first time:");
    while (scanf("%s %c", str, &ch) == 2)
    {
        pos = func_5(str, ch);
        if (pos)
            printf("find first character %c at %s\n", ch, pos);
        else
            printf("not found character %c in %s\n", ch, str);

        puts("Again,Enter a string and a character to search for first time:");
    }
    puts("done...");
}

int is_within(char *str, int target)
{
    int ch;
    while ((ch = *str) && ch != target)
        str++;
    return ch ? str : 0;
}

void exercise_6(void)
{
    // 6．编写一个名为is_within()的函数，接受一个字符和一个指向字符串的指针作为两个函数形参。如果指定字符在字符串中，该函数返回一个非零值（即为真）。否则，返回0（即为假）。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
    char str[255] = {'\0'};
    char *pos = NULL;
    char ch;

    puts("Enter a string and a character to search for first time:");
    while (scanf("%s %c", str, &ch) == 2)
    {
        pos = is_within(str, ch);
        if (pos)
            printf("find first character %c at %s\n", ch, pos);
        else
            printf("not found character %c in %s\n", ch, str);

        puts("Again,Enter a string and a character to search for first time:");
    }
    puts("done...");
}

char *mystrncpy(char *restrict dest, const char *restrict src, size_t count)
{
    char *start = dest;
    while (count-- && (*dest++ = *src++))
        ;
    count ? *dest = '\0' : NULL;
    return start;
}

void exercise_7(void)
{
    // 7．strncpy(s1, s2, n)函数把s2中的n个字符拷贝至s1中，截断s2，或者有必要的话在末尾添加空字符。如果s2的长度是n或多于n，目标字符串不能以空字符结尾。
    // 该函数返回s1。自己编写一个这样的函数，名为mystrncpy()。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
    const int n = 10;
    char str[n + 1] = {'\0'};
    char src[255] = {'\0'};

    puts("Enter a string to be copied:");
    while (scanf("%s", src) == 1)
    {
        printf("copied string is %s\n", mystrncpy(str, src, n));
        puts("Again,Enter a string to be copied:");
    }
    puts("done...");
}

char *string_in(const char *src, const char *target)
{
    char *pos = NULL;
    int ch;
    while ((ch = *src) && (ch != *target))
        src++;
    if (ch)
    {
        pos = src;
        while ((ch = *target++) && (ch == *src++))
            ;
        return ch ? NULL : pos;
    }

    return NULL;
}

void exercise_8(void)
{
    // 8．编写一个名为string_in()的函数，接受两个指向字符串的指针作为参数。如果第2个字符串包含在第1个字符串中，该函数将返回第1个字符串开始的地址。
    // 例如，string_in("hats", "at")将返回hats中a的地址。否则，该函数返回空指针。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
    char src[255] = {'\0'};
    char target[255] = {'\0'};
    char *pos = NULL;

    puts("Enter a string and a string to search for:");
    while (scanf("%s %s", src, target) == 2)
    {
        pos = string_in(src, target);
        if (pos)
            printf("find string %s at %s\n", target, pos);
        else
            printf("not found string %s in %s\n", target, src);

        puts("Again,Enter a string and a string to search for:");
    }
    puts("done...");
}

char *func_9(char *src)
{
    char *start;
    char *end;
    int ch;

    start = src;
    end = src + strlen(src) - 1;
    while (start < end)
    {
        ch = *end;
        *end = *start;
        *start = ch;
        start++;
        end--;
    }

    return src;
}

void exercise_9(void)
{
    // 9．编写一个函数，把字符串中的内容用其反序字符串代替。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。
    char src[255] = {'\0'};

    puts("Enter a string to be reversed:");
    while (scanf("%s", src) == 1)
    {
        printf("reversed to %s\n", func_9(src));
        puts("Again,Enter a string to be reversed:");
    }
}

char *func_10(char *src)
{
    char *end;
    char *pos;
    int ch;

    end = pos = src;
    while ((ch = *pos++))
        ch != '\x20' ? (*end++ = ch) : NULL;
    *end = '\0';

    return src;
}

void exercise_10(void)
{
    // 10．编写一个函数接受一个字符串作为参数，并删除字符串中的空格。在一个程序中测试该函数，使用循环读取输入行，直到用户输入一行空行。该程序应该应用该函数读取每个输入的字符串，并显示处理后的结果。
    char src[255] = {'\0'};

    puts("Enter a string contain spaces to be trimed or exit with all spaces:");
    while (fgets(src, 255, stdin) && src[0] != '\xA' && src[0] != '\xD' && src[0] != '\x20')
    {
        printf("trim to %s\n", func_10(src));
        puts("Again,Enter a string contain spaces to be trimed or exit with all spaces:");
    }
}

int GetStrs(char **strs, int size)
{
    size_t i;

    printf("Enter %d strings or EOF to exit\n", size);
    for (i = 0; i < size && scanf("%s", strs[i]) == 1; i++)
        ;

    return i;
}

int GetMenu()
{
    int menu = 0;

    puts("Choose a menu below:");
    puts("0.exit");
    puts("1.print");
    puts("2.print by ascii order");
    puts("3.print by length order");
    puts("4.print as the same length of first string");
    scanf("%d", &menu);
    return menu;
}

void PrintStrs(const char *strs[10], int size)
{
    for (size_t i = 0; i < size; i++)
        puts(strs[i]);
}

typedef int (*comfunc)(const char *, const char *);
int ByAsciiOrder(const char *left, const char *right)
{
    return *left > *right;
}

int ByLengthOrder(const char *left, const char *right)
{
    return strlen(left) > strlen(right);
}

// 0 by ascii
// 1 by length
void PrintStrsByOrder(char *strs[10], int size, int order)
{
    char *sorted[10];
    char *temp;
    comfunc func;

    switch (order)
    {
    case 0:
        func = ByAsciiOrder;
        break;
    case 1:
        func = ByLengthOrder;
        break;
    default:
        puts("Invalid order...");
        return;
    }

    for (size_t i = 0; i < size; i++)
        sorted[i] = strs[i];

    for (size_t i = 0; i < size - 1; i++)
    {
        for (size_t j = i + 1; j < size; j++)
        {
            if (func(sorted[i], sorted[j]))
            {
                temp = sorted[j];
                sorted[j] = sorted[i];
                sorted[i] = temp;
            }
        }
    }

    PrintStrs(sorted, size);
}
void PrintStrsByAsiiOrder(const char *strs[10], int size)
{
    PrintStrsByOrder(strs, size, 0);
}

void PrintStrsByLengthOrder(const char *strs[10], int size)
{
    PrintStrsByOrder(strs, size, 1);
}

void PrintStrsByFirstStrLen(const char *strs[10], int size)
{
    size_t len = strlen(strs[0]);
    for (size_t i = 0; i < size; i++)
    {
        for (size_t j = 0; j < len && strs[i][j]; j++)
        {
            putchar(strs[i][j]);
        }
        putchar('\n');
    }
}

void OneMenu(int menu, const char *strs[10], int size)
{
    switch (menu)
    {
    case 0:
        puts("exit...");
        break;
    case 1:
        PrintStrs(strs, size);
        break;
    case 2:
        PrintStrsByAsiiOrder(strs, size);
        break;
    case 3:
        PrintStrsByLengthOrder(strs, size);
        break;
    case 4:
        PrintStrsByFirstStrLen(strs, size);
        break;
    default:
        puts("unknown menu...");
        break;
    }
}

void exercise_11(void)
{
    // 11．编写一个程序，读入10个字符串或者读到EOF时停止。该程序为用户提供一个有5个选项的菜单：打印源字符串列表、以ASCII中的顺序打印字符串、
    // 按长度递增顺序打印字符串、按字符串中第1个单词的长度打印字符串、退出。菜单可以循环显示，除非用户选择退出选项。当然，该程序要能真正完成菜单中各选项的功能。
    char strs[10][255] = {'\0'};
    char *temp[10];
    int menu;
    for (size_t i = 0; i < 10; i++)
    {
        temp[i] = &strs[i][0];
    }

    while (GetStrs(temp, 10) == 10)
    {
        while (menu = GetMenu())
            OneMenu(menu, temp, 10);
        if (!menu)
            break;
    }
}