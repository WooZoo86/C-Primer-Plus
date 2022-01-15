/**
 * @file exercise.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 第8章课后习题
 * @version 0.1
 * @date 2022-01-15
 *
 * @copyright Copyright (c) 2022
 *
 */

/* 复习题
1．putchar(getchar())是一个有效表达式，它实现什么功能？getchar(putchar())是否也是有效表达式？
答案：原样输出字符，后者无效表达式，因为getcha函数没有参数。

2．下面的语句分别完成什么任务？　　
a．putchar('H');　　H
b．putchar('\007');　　响铃
c．putchar('\n');　　换行
d．putchar('\b');   退格

3．假设有一个名为count的可执行程序，用于统计输入的字符数。设计一个使用count程序统计essay文件中字符数的命令行，并把统计结果保存在essayct文件中。
答案：count < essay > essayct

4．给定复习题3中的程序和文件，下面哪一条是有效的命令？　　
a．essayct <essay　　无效，不能同时为数据文件
b．count essay　　无效，被当作第一个参数
c．essay >count     有效的输入流重定向

5．EOF是什么？
答案：EOF是end of file的缩写，代表流结束，其值通常是-1.

6．对于给定的输入（ch是int类型，而且是缓冲输入），下面各程序段的输出分别是什么？
a．输入如下：
If you quit, I will. [enter]
程序段如下：
while((ch=getchar())!=‘i’)
    putchar(ch);
输出：If you qu
b．输入如下：
Harhar[enter]
程序段如下：
while((ch=getchar())!=‘\n’)
{
    putchar(ch++);
    putchar(++ch);
}
输出：HJacrthjacrt

7．C如何处理不同计算机系统中的不同文件和换行约定？
答案：C中使用标准库中的输入输出函数，这些函数会根据不同平台系统要求进行转换，得出的结果都是一样的。部分系统中换行是0xD0xA，经过标准函数后统一为oxD。

8．在使用缓冲输入的系统中，把数值和字符混合输入会遇到什么潜在的问题？
答案：数字可能被解释为ASCII码值，字符串可能被当作数字处理，谨慎混合使用getchar和scanf两个函数。
*/

/* 编程习题 */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <math.h>

void exercise_1(void);
void exercise_2(void);
void exercise_3(void);
void exercise_4(void);
void exercise_5(void);
int exercise_6(void);
void exercise_7(void);
void exercise_8(void);

int main(void)
{
    // exercise_1();
    // exercise_2();
    // exercise_3();
    // exercise_4();
    // exercise_5();
    // exercise_6();
    // exercise_7();
    exercise_8();
    return 0;
}

//下面的一些程序要求输入以EOF终止。如果你的操作系统很难或根本无法使用重定向，请使用一些其他的测试来终止输入，如读到&字符时停止。
void exercise_1(void)
{
    // 1．设计一个程序，统计在读到文件结尾之前读取的字符数。
    int ch;
    int count;

    count = 0;
    while ((ch = getchar()) != EOF)
    {
        if ('\n' != ch)
            count++;
    }
    printf("%d characters\n", count);
}

void exercise_2(void)
{
    // 2．编写一个程序，在遇到EOF之前，把输入作为字符流读取。程序要打印每个输入的字符及其相应的ASCII十进制值。
    //注意，在ASCII序列中，空格字符前面的字符都是非打印字符，要特殊处理这些字符。
    //如果非打印字符是换行符或制表符，则分别打印\n或\t。否则，使用控制字符表示法。
    //例如，ASCII的1是Ctrl+A，可显示为^A。注意，A的ASCII值是Ctrl+A的值加上64。
    //其他非打印字符也有类似的关系。除每次遇到换行符打印新的一行之外，每行打印10对值。
    //（注意：不同的操作系统其控制字符可能不同。）
    int ch, count;

    count = 0;
    while ((ch = getchar()) != EOF)
    {
        count++;
        if (' ' > ch)
        {
            switch (ch)
            {
            case '\n':
                printf("\\n");
                putchar('\n');
                count = 0;
                break;
            case '\t':
                printf("\\t");
                break;
            default:
                printf("^%c", ch + 64);
                break;
            }
        }
        else
            putchar(ch);
        if (10 == count)
        {
            putchar('\n');
            count = 0;
        }
    }
}

void exercise_3(void)
{
    // 3．编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要报告输入中的大写字母和小写字母的个数。
    //假设大小写字母数值是连续的。或者使用ctype.h库中合适的分类函数更方便。
    int ch;
    int ucount, lcount;

    ucount = lcount = 0;
    while ((ch = getchar()) != EOF)
    {
        if (!isalpha(ch))
            continue;
        if (isupper(ch))
            ucount++;
        if (islower(ch))
            lcount++;
    }
    printf("Done,uppercase = %d, lowercase = %d\n", ucount, lcount);
}

void exercise_4(void)
{
    // 4．编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要报告平均每个单词的字母数。
    //不要把空白统计为单词的字母。实际上，标点符号也不应该统计，但是现在暂时不同考虑这么多（如果你比较在意这点，
    //考虑使用ctype.h系列中的ispunct()函数）。
    int ch;
    int words, chs;
    bool inWord;

    words = chs = 0;
    inWord = false;
    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch))
        {
            chs++;
            if (!inWord)
                inWord = true;
        }
        else
        {
            if (inWord)
            {
                words++;
                inWord = false;
            }
        }

        /*下面认为输入的只有字母和标点符号
        if (ispunct(ch) || isspace(ch))
        {
            if (inWord)
            {
                inWord = false;
                words++;
            }
        }
        else
        {
            chs++;
            if (!inWord)
                inWord = true;
        }
        */
    }
    printf("%.2f average characters\n", (float)chs / words);
}

void exercise_5(void)
{
    // 5．修改程序清单8.4的猜数字程序，使用更智能的猜测策略。例如，程序最初猜50，询问用户是猜大了、猜小了还是猜对了。
    //如果猜小了，那么下一次猜测的值应是50和100中值，也就是75。如果这次猜大了，那么下一次猜测的值应是50和75的中值，等等。
    //使用二分查找（binary search）策略，如果用户没有欺骗程序，那么程序很快就会猜到正确的答案。
    int guess, small, max;
    char response;

    guess = 50;
    small = 0;
    max = 100;
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right and with");
    printf("\nan n if it is wrong.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((response = getchar()) != 'y')
    {
        if ('s' == response) // smaller
        {
            max = guess;
            guess -= (max - small) / 2;
            printf("Well, then, is it %d?\n", guess);
        }
        else if ('b' == response) // bigger
        {
            small = guess;
            guess += (max - small) / 2;
            printf("Well, then, is it %d?\n", guess);
        }
        else
            printf("Sorry, I understand only y or n.\n");
        while (getchar() != '\n')
            continue;
    }
    printf("I knew I could do it!\n");
}

int exercise_6(void)
{
    // 6．修改程序清单8.8中的get_first()函数，让该函数返回读取的第1个非空白字符，并在一个简单的程序中测试。
    int ch;

    /*ch = getchar();
    while (getchar() != '\n')
        continue;*/
    while (isspace(ch = getchar()))
        continue;
    return ch;
}

void exercise_7(void)
{
    // 7．修改第7章的编程练习8，用字符代替数字标记菜单的选项。用q代替5作为结束输入的标记。
    int menu;
    double rate;

    printf("****************************************************\n");
    printf("Enter the aplha corresponding to the desired pay or action\n");
    printf("a) $8.75/hr           b) $9,33/hr\n");
    printf("c) $10.00/hr          d) $11.20/hr\n");
    printf("q) quit");
    printf("****************************************************\n");
    menu = 'q';
    while ((menu = getchar()) != 'q')
    {
        switch (menu)
        {
        case 'a':
            rate = 8.75;
            break;
        case 'b':
            rate = 9.33;
            break;
        case 'c':
            rate = 10.00;
            break;
        case 'd':
            rate = 11.20;
            break;
        default:
            printf("Enter a valid menu alpha:\n");
            continue;
        }

        //接习题7.7代码
    }
}

void exercise_8(void)
{
    // 8．编写一个程序，显示一个提供加法、减法、乘法、除法的菜单。
    //获得用户选择的选项后，程序提示用户输入两个数字，然后执行用户刚才选择的操作。
    //该程序只接受菜单提供的选项。程序使用foat类型的变量存储用户输入的数字，如果用户输入失败，则允许再次输入。
    //进行除法运算时，如果用户输入0作为第2个数（除数），程序应提示用户重新输入一个新值。该程序的一个运行示例如下：
    // Enter the operation of your choice:
    // a. add     s. subtract
    // m. mutp1y  d. divide
    // q. quit
    // a
    // Enter first number : 22.4
    // Enter second number : one
    // one is not an number.
    // Please enter a number,such as 2.5 -1.78E8, or 3 : 1
    // 22.4 + 1 = 23.4
    // Enter the operation of your choice:
    // a. add     s. subtract
    // m. mutp1y  d. divide
    // q. quit
    // d
    // Enter first number : 22.4
    // Enter second number : 0
    // Enter a number other than 0 : 0.2
    // 18.4 / 0.2 = 92
    // Enter the operation of your choice:
    // a. add     s. subtract
    // m. mutp1y  d. divide
    // q. quit
    // q
    // Bye.
    int ch, ops;
    float ops1, ops2, result;

    do
    {
        printf("Enter the operation of your choice:\n");
        printf("a. add          s. subtract\n");
        printf("m. mutply       d. divide\n");
        printf("q. quit\n");
        if ('q' == (ch = getchar()))
            break;
        do
        {
            printf("Enter first number : ");
            if (scanf("%f", &ops1) == 1)
                break;
            printf("Input is not an number.\n");
            printf("Please enter a number,such as 2.5 -1.78E8, or 3 : ");
        } while (true);
        do
        {
            printf("Enter second number : ");
            if (scanf("%f", &ops2) == 1)
                break;
            printf("Input is not an number.\n");
            printf("Please enter a number,such as 2.5 -1.78E8, or 3 : ");
        } while (true);

        switch (ch)
        {
        case 'a':
            ops = '+';
            result = ops1 + ops2;
            break;
        case 's':
            ops = '-';
            result = ops1 - ops2;
            break;
        case 'm':
            ops = '*';
            result = ops1 * ops2;
            break;
        case 'd':
            while (fabsf(ops2 - 0.0f) < 0.000001) //超过float精度，认为是0.0
            {
                printf("Enter a number other than 0 : ");
                scanf("%f", &ops2);
            }
            ops = '/';
            result = ops1 / ops2;

            break;
        default:
            printf("invalid menu\n");
            continue;
        }
        printf("%.2f %c %.2f = %.2f\n", ops1, ops, ops2, result);
        while (getchar() != '\n')
            continue;
    } while (true);
    printf("Bye.\n");
}