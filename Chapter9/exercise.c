/**
 * @file exercise.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 第9章课后练习题
 * @version 0.1
 * @date 2022-01-15
 *
 * @copyright Copyright (c) 2022
 *
 */

/* 复习题
1．实际参数和形式参数的区别是什么？
答案：实际参数属于调用者，通过拷贝复制给形式参数，形式参数属于被调用函数私有。

2．根据下面各函数的描述，分别编写它们的ANSI C函数头。注意，只需写出函数头，不用写函数体。　　
a．donut()接受一个int类型的参数，打印若干（参数指定数目）个0　　void donut(int);
b．gear()接受两个int类型的参数，返回int类型的值　　int gear(int,int);
c．guess()不接受参数，返回一个int类型的值　　int guess(void);
d．stuff_it()接受一个double类型的值和double类型变量的地址，把第1个值存储在指定位置  void stuff_it(double,double*);

3．根据下面各函数的描述，分别编写它们的ANSI C函数头。注意，只需写出函数头，不用写函数体。　　
a．n_to_char()接受一个int类型的参数，返回一个char类型的值　　char n_to_char(int);
b．digit()接受一个double类型的参数和一个int类型的参数，返回一个int类型的值　　int digit(double,int);
c．which()接受两个可存储double类型变量的地址，返回一个double类型的地址　　double* which(double*,double*);
d．random()不接受参数，返回一个int类型的值  int random(void);

4．设计一个函数，返回两整数之和。
int sum(int x,int y)
{
    return x+y;
}

5．如果把复习题4改成返回两个double类型的值之和，应如何修改函数？
double sum(double x,double y)
{
    return x+y;
}

6．设计一个名为alter()的函数，接受两个int类型的变量x和y，把它们的值分别改成两个变量之和以及两变量之差。
void alter(int* x,int* y)
{
    int x_value,y_value;

    x_value=*x;
    y_value=*y;
    *x=x_value+y_value;
    *y=x_value-y_value;
}

7．下面的函数定义是否正确？
void salami(num)//形式参数缺少类型
{
    int num, count;//函数体内重复定义变量num
    for (count =1; count<=num; num++)
        printf(" o salami mio!\n );
}

8．编写一个函数，返回3个整数参数中的最大值。
int max(int x,int y,int z)
{
    int temp;

    temp=(x>=y)?x:y;
    temp=(temp>=z)?temp:z;

    return temp;
}

9．给定下面的输出：
Please choose one of the following:
1)copy files        2) move files
3)remove files      4)quit
Enter the number of your choice:
a．编写一个函数，显示一份有4个选项的菜单，提示用户进行选择（输出如上所示）。
void menu()
{
    printf("Please choose one of the following:\n");
    printf("1)copy files        2) move files\n");
    printf("3)remove files      4)quit\n");
    printf("Enter the number of your choice:\n");
}
b．编写一个函数，接受两个int类型的参数分别表示上限和下限。该函数从用户的输入中读取整数。
//如果整数超出规定上下限，函数再次打印菜单（使用a部分的函数）提示用户输入，然后获取一个新值。
//如果用户输入的整数在规定范围内，该函数则把该整数返回主调函数。如果用户输入一个非整数字符，该函数应返回4。
int choice(int upper,int low)
{
    int choice;

    while(scanf("%d",&choice)!=-1)
    {
        if(choice<low||choice>upper)
        {
            menu();
            contunue;
        }
        else
            return choice;
    }

    return 4;
}
c．使用本题a和b部分的函数编写一个最小型的程序。最小型的意思是，该程序不需要实现菜单中各选项的功能，只需显示这些选项并获取有效的响应即可。
#include <stdio.h>
int main(void)
{
    int chic;

    while((chic=choice())!=4)
        continue;

    return 0;
}
*/

/* 编程练习 */
#include <stdio.h>
#include <ctype.h>
#include <math.h>

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

double min(double x, double y)
{
    return x < y ? x : y;
}

void exercise_1(void)
{
    // 1．设计一个函数min(x, y)，返回两个double类型值的较小值。在一个简单的驱动程序中测试该函数。
    double x, y;

    printf("Enter two double floating point numbers (q to quit):\n");
    while (scanf("%lf %lf", &x, &y) == 2)
    {
        printf("Smaller one is %.2lf\n", min(x, y));
    }
    printf("Done.\n");
}

void chline(char ch, int i, int j)
{
    int row, col;

    for (row = 0; row < i; row++)
    {
        for (col = 0; col < j; col++)
            putchar(ch);
        putchar('\n');
    }
}

void exercise_2(void)
{
    // 2．设计一个函数chline(ch, i, j)，打印指定的字符j行i列。在一个简单的驱动程序中测试该函数。
    chline('*', 8, 9);
}

void charline(char ch, int col, int row)
{
    int x, y;

    for (x = 0; x < row; x++)
    {
        for (y = 0; y < col; y++)
            putchar(ch);
        putchar('\n');
    }
}

void exercise_3(void)
{
    // 3．编写一个函数，接受3个参数：一个字符和两个整数。字符参数是待打印的字符，第1个整数指定一行中打印字符的次数，
    //第2个整数指定打印指定字符的行数。编写一个调用该函数的程序。
    charline('*', 5, 5);
}

double average(double x, double y)
{
    return 1.0 / ((1.0 / x + 1.0 / y) / 2.0);
}

void exercise_4(void)
{
    // 4．两数的调和平均数这样计算：先得到两数的倒数，然后计算两个倒数的平均值，最后取计算结果的倒数。
    //编写一个函数，接受两个double类型的参数，返回这两个参数的调和平均数。
    printf("the average is %.2lf\n", average(2.0, 3.0));
}

void larger_of(double *a, double *b)
{
    double max;

    max = (*a > *b) ? *a : *b;
    *a = *b = max;
}

void exercise_5(void)
{
    // 5．编写并测试一个函数larger_of()，该函数把两个double类型变量的值替换为较大的值。
    //例如，larger_of(x, y)会把x和y中较大的值重新赋给两个变量。
    double a = 4.0;
    double b = 6.0;

    larger_of(&a, &b);
    printf("a = %.2lf,b = %.2lf\n", a, b);
}

void sort_var(double *x, double *y, double *z)
{
    double max, min, temp;

    if (*x < *y)
    {
        if (*y > *z)
        {
            if (*x > *z)
            {
                temp = *x;
                *x = *z;
                *z = *y;
                *y = temp;
            }
            else
            {
                temp = *y;
                *y = *z;
                *z = temp;
            }
        }
    }
    else
    {
        if (*y > *z)
        {
            temp = *z;
            *z = *x;
            *x = temp;
        }
        else
        {
            if (*x > *z)
            {
                temp = *z;
                *z = *x;
                *x = *y;
                *y = temp;
            }
            else
            {
                temp = *y;
                *y = *x;
                *x = temp;
            }
        }
    }
}

void exercise_6(void)
{
    // 6．编写并测试一个函数，该函数以3个double变量的地址作为参数，把最小值放入第1个变量，
    //中间值放入第2个变量，最大值放入第3个变量。
    double x, y, z;

    x = 2.0;
    y = 3.0;
    z = 1.0;
    sort_var(&x, &y, &z);
    printf("%.2lf %.2lf %.2lf\n", x, y, z);
}

int alpha_pos(int ch)
{
    if (isalpha(ch))
    {
        if (ch < 'a')
            return ch - 'A' + 1;
        else
            return ch - 'a' + 1;
    }
    else
        return -1;
}

void exercise_7(void)
{
    // 7．编写一个函数，从标准输入中读取字符，直到遇到文件结尾。程序要报告每个字符是否是字母。
    //如果是，还要报告该字母在字母表中的数值位置。例如，c和C在字母表中的位置都是3。合并一个函数，以一个字符作为参数，
    //如果该字符是一个字母则返回一个数值位置，否则返回-1。
    int ch, pos;

    while ((ch = getchar()) != EOF)
    {
        pos = alpha_pos(ch);
        if (-1 != pos)
        {
            printf("\n%c is a alpha,pos = %d", ch, pos);
        }
    }
    printf("Done.\n");
}

double power(double n, int p)
{
    double pow = 1;
    int i, exp;

    if (fabs(n - 0.0) < 0.000000001)
    {
        printf("0.0 undefined.\n");
        return 1;
    }

    //任何数的0次幂都为1
    if (0 == p)
        return 1;

    exp = (p < 0) ? -p : p;
    for (i = 1; i <= exp; i++)
        pow *= n;

    return (p < 0) ? 1.0 / pow : pow;
}

void exercise_8(void)
{
    // 8．第6章的程序清单6.20中，power()函数返回一个double类型数的正整数次幂。改进该函数，使其能正确计算负幂。
    //另外，函数要处理0的任何次幂都为0，任何数的0次幂都为1（函数应报告0的0次幂未定义，因此把该值处理为1）。
    //要使用一个循环，并在程序中测试该函数。
    printf("pow = %.2lf\n", power(1.2, -2));
}

double itr(double n, int p)
{
    double power = 1;

    if (fabs(n - 0.0) < 0.000000001)
    {
        printf("0.0 undefined.\n");
        return 1;
    }

    if (0 == p)
        return 1;

    if (p > 0)
        return n * itr(n, p - 1);
    else
        return (1.0 / n) * itr(n, p - 1);
}

void exercise_9(void)
{
    // 9．使用递归函数重写编程练习8。
    printf("pow = %.2lf\n", power(1.2, -2));
}

void to_binary(unsigned long n, int base)
{
    int r;

    r = n % base;
    if (n >= base)
        to_binary(n / base, base);
    putchar('0' + r);
    return;
}

void exercise_10(void)
{
    // 10．为了让程序清单9.8中的to_binary()函数更通用，编写一个to_base_n()函数接受两个参数，
    //且第二个参数在2～10范围内，然后以第2个参数中指定的进制打印第1个参数的数值。例如，to_base_n(129， 8)显示的结果为201，
    //也就是129的八进制数。在一个完整的程序中测试该函数。
    to_binary(7, 3);
    putchar('\n');
}

unsigned long Fibonacci(unsigned n)
{
    unsigned int i;
    unsigned long sum, sum1, sum2;

    sum1 = sum2 = 1;
    if (n <= 2)
        return 1;

    for (i = 3; i <= n; i++, sum1 = sum2, sum2 = sum)
    {
        sum = sum1 + sum2;
    }

    return sum;
}

void exercise_11(void)
{
    // 11．编写并测试Fibonacci()函数，该函数用循环代替递归计算斐波那契数。
    printf("Fibonacci = %lu\n", Fibonacci(6));
}