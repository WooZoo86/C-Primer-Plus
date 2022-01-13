/**
 * @file exercise.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 第六章课后习题
 * @version 0.1
 * @date 2022-01-13
 *
 * @copyright Copyright (c) 2022
 *
 */

/* 复习题
1．写出执行完下列各行后quack的值是多少。后5行中使用的是前一行生成的quack的值。
int quack = 2;
quack += 5;     //7
quack *= 10;    //70
quack -= 6;     //64
quack /= 8;     //8
quack %= 3;     //2

2．假设value是int类型，下面循环的输出是什么？
for(value=36; value > 0; value /= 2)
    printf("%3d",value);    //  36  18  9  4  2  1
如果value是double类型，会出现什么问题？
答案：循环无穷无尽。

3．用代码表示以下测试条件：　　
a．x大于5　　//x>5
b．scanf()读取一个名为x的double类型值且失败　　//double x;scanf("&lf",&x)!=1;
c．x 的值等于5  //x==5

4．用代码表示以下测试条件：　　
a．scanf()成功读入一个整数　　//int x;scanf("%d",&x)==1;
b．x 不等于5　　//x<=5
c．x 大于或等于20   //x>=20

5．下面的程序有点问题，请找出问题所在。
#inc1ude <stdio.h>
int main(void)
{
    int i,j,list(10);//数组声明使用[]

    for(i=1,i<=10,i++)//用;分隔三个表达式，不是从0开始，下标超出数组范围
    {
        list[i]=2*i+3;
        for(j=1,j> =i,j++)//用;分隔三个表达式，关系表达式不能有空格符隔开
            printf(" %d",list[j]);
        printf("\n");
    //外层for少个有大括号
    //main缺少返回值
}

6．编写一个程序打印下面的图案，要求使用嵌套循环：
$$$$$$$$
$$$$$$$$
$$$$$$$$
$$$$$$$$

#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}

7．下面的程序各打印什么内容？　　
a．
int i = 0;

while (++i < 4)
    printf("Hi! ");
do
{
    printf("Bye! ");
} while (i++ < 8);
//Hi! Hi! Hi! Bye! Bye! Bye! Bye! Bye!
b.
int i;
char ch;

for (i = 0, ch = 'A'; i < 4; i++, ch += 2 * i)
    printf("%c", ch);
//ACGM

8．假设用户输入的是Go west, young man!，下面各程序的输出是什么？（在ASCII码中，!紧跟在空格字符后面）
a.
char ch;

scanf("%c", &ch);
while (ch != 'g')
{
    printf("%c", ch);
    scanf("%c", &ch);
}
//Go west, youn
b.
char ch;

scanf("%c", &ch);
while (ch != 'g')
{
    printf("%c", ++ch);
    scanf("%c", &ch);
}
//Hp!xftu-!zpvo
c.
char ch;

do
{
    scanf("%c", &ch);
    printf("%c", ch);
} while (ch != 'g');
//Go west, young
d.
char ch;

scanf("%c", &ch);
for (ch = '$'; ch != 'g'; scanf("%c", &ch))
    printf("%c", ch);
//$o west, youn

9．下面的程序打印什么内容？
int n, m;

n = 30;
while (++n <= 33)
    printf("%d|", n);

n = 30;
do
{
    printf("%d|", n);
} while (++n <= 33);

printf("\n***\n");

for (n = 1; n * n < 200; n += 4)
    printf("%d\n", n);

printf("\n***\n");

for (n = 2, m = 6; n < m; n *= 2, m += 2)
    printf("%d %d\n", n, m);

printf("\n***\n");
for (n = 5; n > 0; n--)
{
    for (m = 0; m <= n; m++)
        printf("=");
    printf("\n");
}
//
31|32|33|30|31|32|33|
***
1
5
9
13

***
2 6
4 8
8 10

***
======
=====
====
===
==

10．考虑下面的声明：
double mint[10];
a．数组名是什么？　　//mint
b．该数组有多少个元素？　　//10
c．每个元素可以存储什么类型的值？　　//double
d．下面的哪一个scanf()的用法正确？　　　　
    i．scanf("%lf", mint[2])　　　　
    ii．scanf("%lf", &mint[2])　　　　//ok
    iii．scanf("%lf", &mint)

11．Noah先生喜欢以2计数，所以编写了下面的程序，创建了一个存储2、4、6、8等数字的数组。这个程序是否有错误之处？如果有，请指出。
#include <stdio.h>
#define SIZE 8
int main(void)
{
    int by_twos[SIZE];
    int index;

    for (index = 0; index <= SIZE; index++) //<= 超出数组范围
        by_twos[index] = 2 * index;
    for (index = 0; index <= SIZE; index++)
        printf("%d ", by_twos);//取数组值用[index]
    printf("\n");
    return 0;
}

12．假设要编写一个返回long类型值的函数，函数定义中应包含什么？
答案：返回long类型的结果。

13．定义一个函数，接受一个int类型的参数，并以long类型返回参数的平方值。
long square(int x);
long square(int x)
{
    return x*x;
}

14．下面的程序打印什么内容？
#include <stdio.h>
#define SIZE 8
int main(void)
{
    int k;

    for (k = 1, printf("%d: Hi!\n", k); printf("k = %d\n", k), k * k < 26; k += 2, printf("Now k is %d\n", k))
        printf("k is %d in the loop\n", k);
    return 0;
}
1: Hi!
k = 1
k is 1 in the loop
Now k is 3
k = 3
k is 3 in the loop
Now k is 5
k = 5
k is 5 in the loop
Now k is 7
k = 7
*/

/* 编程练习 */
#include <stdio.h>
#include <string.h>

void exercise_1(void);
void exercise_2(void);
void exercise_3(void);
void exercise_4(void);
void exercise_5(void);
void exercise_6(void);
void exercise_7(void);
void exercise_8(void);
void exercise_9(void);
double caculate(double x, double y);
void exercise_10(void);
void exercise_11(void);
void exercise_12(void);
int singed(int count);
void exercise_13(void);
void exercise_14(void);
void exercise_15(void);
void exercise_16(void);
void exercise_17(void);
void exercise_18(void);

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
    // exercise_11();
    // exercise_12();
    // exercise_13();
    // exercise_14();
    // exercise_15();
    // exercise_16();
    // exercise_17();
    exercise_18();

    return 0;
}

#define ALPHA_SIZE 26
void exercise_1(void)
{
    // 1．编写一个程序，创建一个包含26个元素的数组，并在其中存储26个小写字母。然后打印数组的所有内容。
    int i;
    char chs[ALPHA_SIZE];

    for (i = 0; i < ALPHA_SIZE; i++)
        chs[i] = 'a' + i;
    for (i = 0; i < ALPHA_SIZE; i++)
        printf("%c ", chs[i]);
    printf("\n");
}

void exercise_2(void)
{
    // 2．使用嵌套循环，按下面的格式打印字符：
    //$
    //$$
    //$$$
    //$$$$
    //$$$$$
    int i, j;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
            printf("$");
        printf("\n");
    }
}

void exercise_3(void)
{
    // 3．使用嵌套循环，按下面的格式打印字母：
    // F
    // FE
    // FED
    // FEDC
    // FEDCB
    // FEDCBA
    //注意：如果你的系统不使用ASCII或其他以数字顺序编码的代码，可以把字符数组初始化为字母表中的字母
    // char lets[27] = "ABCDEFGHエJKLMNOPORSTUVWXYZ";然后用数组下标选择单独的字母，例如lets[0]是'A'，等等。
    int i, j;
    char ch;

    for (i = 0; i < 6; i++)
    {
        for (j = 0, ch = 'F'; j <= i; j++)
            printf("%c", ch - j);
        printf("\n");
    }
}

void exercise_4(void)
{
    // 4．使用嵌套循环，按下面的格式打印字母：
    // A
    // BC
    // DEF
    // GHIJ
    // KLMNO
    // PQRSTU
    //如果你的系统不使用以数字顺序编码的代码，请参照练习3的方案解决。
    int i, j;
    char ch;

    for (i = 0, ch = 'A'; i < 6; i++, ch += i)
    {
        for (j = 0; j <= i; j++)
            printf("%c", ch + j);
        printf("\n");
    }
}

void exercise_5(void)
{
    // 5．编写一个程序，提示用户输入大写字母。使用嵌套循环以下面金字塔型的格式打印字母：
    //     A
    //    ABA
    //   ABCBA
    //  ABCDCBA
    // ABCDEDCBA
    //打印这样的图形，要根据用户输入的字母来决定。例如，上面的图形是在用户输入E后的打印结果。
    //提示：用外层循环处理行，每行使用3个内层循环，分别处理空格、以升序打印字母、以降序打印字母。
    //如果系统不使用ASCII或其他以数字顺序编码的代码，请参照练习3的解决方案。
    const int LINES = 5;
    char begin, end;

    int i, j, k, l;

    printf("Enter a uppercase letter: ");
    scanf("%c", &end);
    begin = end - LINES + 1;
    for (i = 0; i < LINES; i++)
    {
        for (j = 0; j < (LINES - i); j++)
            printf(" ");
        for (k = 0; k < (i + 1); k++)
            printf("%c", begin + k);
        for (l = 1; l <= i; l++)
            printf("%c", begin + i - l);

        printf("\n");
    }
}

void exercise_6(void)
{
    // 6．编写一个程序打印一个表格，每一行打印一个整数、该数的平方、该数的立方。要求用户输入表格的上下限。使用一个for循环。
    int upper, low;
    int i;

    printf("Enter low value: ");
    scanf("%d", &low);
    printf("Enter upper value: ");
    scanf("%d", &upper);
    for (i = low; i < upper; i++)
        printf("%d      %d      %d\n", i, i * i, i * i * i);
}

void exercise_7(void)
{
    // 7．编写一个程序把一个单词读入一个字符数组中，然后倒序打印这个单词。提示：strlen()函数（第4章介绍过）可用于计算数组最后一个字符的下标。
    char word[256];
    int i;

    printf("Enter a word: ");
    scanf("%s", word);
    for (i = strlen(word); i >= 0; i--)
        printf("%c", word[i]);
    printf("\n");
}

void exercise_8(void)
{
    // 8．编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果。在用户输入非数字之前，程序应循环处理用户输入的每对值。
    double x, y;

    for (; printf("Enter two double floating_point value: "), scanf("%lf %lf", &x, &y) == 2;)
        printf("%.2lf\n", (x - y) / (x * y));
    printf("Done\n");
}

double caculate(double x, double y)
{
    return (x - y) / (x * y);
}

void exercise_9(void)
{
    // 9．修改练习8，使用一个函数返回计算的结果。
    double x, y;

    for (; printf("Enter two double floating_point value: "), scanf("%lf %lf", &x, &y) == 2;)
        printf("%.2lf\n", caculate(x, y));
    printf("Done\n");
}

void exercise_10(void)
{
    // 10．编写一个程序，要求用户输入一个上限整数和一个下限整数，计算从上限到下限范围内所有整数的平方和，并显示计算结果。
    //然后程序继续提示用户输入上限和下限整数，并显示结果，直到用户输入的上限整数等于或小于下限整数为止。程序的运行示例如下：
    // Enter lower and upper integer limits: 5 9
    // The sums of the squares from 25 to 81 is 255
    // Enter next set of limits : 3 25
    // The sums of the squares from 9 to 625 is 5520
    // Enter next set of limits : 5 5
    // Done
    int lower, upper;
    int i, sums;

    printf("Enter lower and upper integer limits: ");
    scanf("%d %d", &lower, &upper);
    while (upper > lower)
    {
        sums = 0;
        for (i = lower; i < upper; i++)
            sums += i * i;
        printf("The sums of the squares from %d to %d is %d\n", lower, upper, sums);
        printf("Enter next set of limits :");
        scanf("%d %d", &lower, &upper);
    }
    printf("Done\n");
}

void exercise_11(void)
{
    // 11．编写一个程序，在数组中读入8个整数，然后按倒序打印这8个整数。
    const int ELE_SIZE = 8;
    int values[ELE_SIZE];
    int i;

    for (i = 0; i < ELE_SIZE; i++)
        scanf("%d", &values[i]);
    for (i = ELE_SIZE - 1; i >= 0; i--)
        printf("%d ", values[i]);
    printf("\nDone\n");
}

int singed(int count)
{
    int i;
    int value;

    value = 1;
    for (i = 0; i < count; i++)
        value *= -1;

    return value;
}

void exercise_12(void)
{
    // 12．考虑下面两个无限序列：
    // 1.0+1.0/2.0+1.0/3.0+1.0/4.0+ ...
    // 1.0-1.0 / 2.0 + 1.0 / 3.0 - 1.0 / 4.0 + ...
    //编写一个程序计算这两个无限序列的总和，直到到达某次数。提示：奇数个-1相乘得-1，偶数个-1相乘得1。
    //让用户交互地输入指定的次数，当用户输入0或负值时结束输入。
    //查看运行100项、1000项、10000项后的总和，是否发现每个序列都收敛于某值？
    int i, count;
    double sum1, sum2;

    printf("Enter a count: ");
    scanf("%d", &count);
    while (count > 0)
    {
        sum1 = sum2 = 1.0;
        for (i = 1; i < count; i++)
        {
            sum1 += 1.0 / (i * 1.0 + 1.0);
            sum2 += singed(i) * (1.0 / (i * 1.0 + 2.0));
        }
        printf("sum1 = %lf,sum2 = %lf,sum = %lf\n", sum1, sum2, sum1 + sum2);
        printf("Enter next count: ");
        scanf("%d", &count);
    }
    printf("Done\n");
}

void exercise_13(void)
{
    //编写一个程序，创建一个包含8个元素的int类型数组，分别把数组元素设置为2的前8次幂。
    //使用for循环设置数组元素的值，使用do　while循环显示数组元素的值。
    const int ELE_SIZE = 8;
    int array[ELE_SIZE];
    int i;

    array[0] = 2;
    for (i = 1; i < ELE_SIZE; i++)
    {
        array[i] = 2 * array[i - 1];
    }

    i = 0;
    do
    {
        printf("%d ", array[i]);
    } while (++i < ELE_SIZE);
    printf("\nDone\n");
}

void exercise_14(void)
{
    // 14．编写一个程序，创建两个包含8个元素的double类型数组，使用循环提示用户为第一个数组输入8个值。
    //第二个数组元素的值设置为第一个数组对应元素的累积之和。例如，第二个数组的第4个元素的值是第一个数组前4个元素之和，
    //第二个数组的第5个元素的值是第一个数组前5个元素之和（用嵌套循环可以完成，但是利用第二个数组的第5个元素是第二个数组的第4个元素与第一个数组的第5个元素之和，
    //只用一个循环就能完成任务，不需要使用嵌套循环）。最后，使用循环显示两个数组的内容，第一个数组显示成一行，第二个数组显示在第一个数组的下一行，
    //而且每个元素都与第一个数组各元素相对应。
    const int ELE_SIZE = 8;
    double array[ELE_SIZE], sums[ELE_SIZE];
    int i = 0;

    printf("Enter %d double floating-point numbers: ", ELE_SIZE);
    scanf("%lf", &array[i]);
    sums[i] = array[i];
    for (i = 1; i < ELE_SIZE; i++)
    {
        scanf("%lf", &array[i]);
        sums[i] = sums[i - 1] + array[i];
    }

    i = 0;
    do
    {
        printf("%.2lf ", array[i]);
    } while (++i < ELE_SIZE);

    printf("\n");
    i = 0;
    do
    {
        printf("%.2lf ", sums[i]);
    } while (++i < ELE_SIZE);
    printf("\nDone\n");
}

void exercise_15(void)
{
    //编写一个程序，读取一行输入，然后把输入的内容倒序打印出来。
    //可以把输入存储在char类型的数组中，假设每行字符不超过255。回忆一下，根据%c转换说明，
    // scanf()函数一次只能从输入中读取一个字符，而且在用户按下Enter键时scanf()函数会生成一个换行字符（\n）。
    const int LINE_LENGTH = 255;
    char line[LINE_LENGTH];
    int i;

    i = 0;
    printf("Enter a line: ");
    do
    {
        scanf("%c", &line[i]);
    } while (line[i++] != '\n');
    for (; --i >= 0;)
        printf("%c", line[i]);
}

void exercise_16(void)
{
    // 16．Daphne以10%的单利息投资了100美元（也就是说，每年投资获利相当于原始投资的10%）。
    // Deirdre以5%的复合利息投资了100美元（也就是说，利息是当前余额的5%，包含之前的利息）。
    //编写一个程序，计算需要多少年Deirdre的投资额才会超过Daphne，并显示那时两人的投资额。
    double daphne, deirdre;
    int years;

    daphne = 100.0;
    deirdre = 100.0;
    years = 0;
    do
    {
        daphne *= 1.1;
        deirdre = deirdre * 0.5 + deirdre;
        years++;
    } while (deirdre <= daphne);
    printf("%d years later,daphne:%.2lf,deirdre:%.2lf\n", years, daphne, deirdre);
}

void exercise_17(void)
{
    // 17．Chuckie Lucky赢得了100万美元（税后），他把奖金存入年利率8%的账户。在每年的最后一天，Chuckie取出10万美元。
    //编写一个程序，计算多少年后Chuckie会取完账户的钱？
    int years;
    double money;

    years = 0;
    money = 100.0;
    do
    {
        money = money + money * 0.08 - 10.0;
        years++;
    } while (money >= 0);
    printf("%d years later,money spend out\n", years);
}

void exercise_18(void)
{
    // 8．Rabnud博士加入了一个社交圈。起初他有5个朋友。他注意到他的朋友数量以下面的方式增长。
    //第1周少了1个朋友，剩下的朋友数量翻倍；第2周少了2个朋友，剩下的朋友数量翻倍。
    //一般而言，第N周少了N个朋友，剩下的朋友数量翻倍。
    //编写一个程序，计算并显示Rabnud博士每周的朋友数量。该程序一直运行，直到超过邓巴数（Dunbar’s number）。
    //邓巴数是粗略估算一个人在社交圈中有稳定关系的成员的最大值，该值大约是150。
    const int DUNBAR_NUM = 150;
    int friends;
    int weeks;

    friends = 5;
    for (weeks = 1; friends < DUNBAR_NUM; weeks++)
        friends = (friends - weeks) * 2;
    printf("%d weeks later,doctor Rabnud has %d friends\n", weeks, friends);
}