/**
 * @file exercise.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 第7章课后习题
 * @version 0.1
 * @date 2022-01-14
 *
 * @copyright Copyright (c) 2022
 *
 */

/* 复习题
1．判断下列表达式是true还是false。　　
a．100 > 3 && 'a'>'c'　　false
b．100 > 3 || 'a'>'c'　　true
c．!(100>3) false

2．根据下列描述的条件，分别构造一个表达式：　　
a．number等于或大于90，但是小于100　　number>=90 && number < 100
b．ch不是字符q或k　　ch!='q'||ch!='k'
c．number在1～9之间（包括1和9），但不是5　 number>=1 && number<=9 && number!=5　
d．number不在1～9之间   number>9||number<1

3．下面的程序关系表达式过于复杂，而且还有些错误，请简化并改正。
#include <stdio.h>
int main(void)
{
    int weight,height;

    scanf("%d ,weight,height);  //scanf("%d %d",&weight,&height);
    if(weight<100&&height>64)
        if(height>=72)
            printf("You are very tall for your weight.\n");
        else if(height<72&&>64)//height<72&&height>64
            printf("You are tall for your weight.\n");
        else if(weight>300&&!(weight<=300)&&height<48)//eight>300&&height<48
        if(!(height>=48))//height<48
            printf(" You are quite short for your weight.\n");
    else
        printf("Your weight is ideal.\n");

    return 0;
}

4．下列各表达式的值是多少？　　
a．5 > 2　　true
b．3 + 4 > 2 && 3 < 2　　3
c．x >= y || y > x　　true
d．d = 5 + ( 6 > 2 )　　d=6
e．'X' > 'T' ? 10 : 5　　10
f． x > y ? y > x : x > y   false

5．下面的程序将打印什么？
#include <stdio.h>

int main(void)
{
    int num;

    for (num = 1; num <= 11; num++)
    {
        if (num % 3 == 0)
            putchar('$');
        else
            putchar('*');
        putchar('#');
        putchar('%');
    }
    putchar('\n');

    return 0;
}
*#%*#%$#%*#%*#%$#%*#%*#%$#%*#%*#%

6．下面的程序将打印什么？
#include <stdio.h>

int main(void)
{
    int i = 0;

    while (i < 3)
    {
        switch (i++)//这不是一个序列点，但是while和for条件表达式确实是
        {
        case 0:
            printf("fat ");
        case 1:
            printf("hat ");
        case 2:
            printf("cat ");
        default:
            printf("Oh no!");
        }
        putchar('\n');
    }

    return 0;
}
fat hat cat Oh no!
hat cat Oh no!
cat Oh no!

7．下面的程序有哪些错误？
#include <stdio.h>
int main(void)
{
    char ch;
    int lc=0;
    int uc=0;
    int oc=0;

    while((ch=getchar())!='#')
    {
        if('a'<=ch>='z')//'a'<=ch&&ch<='z'
            lc++;
        else if(!(ch<'A')||!(ch>'Z'))//'A'<=ch&&ch<='Z'
            uc++;
        oc++;// else oc++;
    }
    printf("%d lowercase,%d uppercase,%d other",lc,uc,oc);
    return 0;
}

8．下面的程序将打印什么？
#include <stdio.h>

int main(void)
{
    int age = 20;

    while (age++ <= 65)
    {
        if ((age % 20) == 0)
            printf("You are %d.Here is a raise.\n", age);
        if (age = 65)
            printf("You are %d.Here is your gold watch.\n", age);
        getchar();
    }

    return 0;
}
重复打印 You are 65.Here is your gold watch.

9．给定下面的输入时，以下程序将打印什么？
q
c
h
b
#include <stdio.h>

int main(void)
{
    char ch;

    while((ch=getchar()) !='#')
    {
        if(ch=='\n')
            continue;
        printf("Step 1\n");
        if(ch=='c')
            continue;
        else if(ch=='b')
            break;
        else if(ch=='h')
            goto laststep;
        printf("Step 2\n");
    laststep:
        printf("Step 3\n");
    }
    printf("Done\n");

    return 0;
}
Step 1
Step 2
Step 3
Step 1
Step 1
Step 3
Step 1
Done

10．重写复习题9，但这次不能使用continue和goto语句。
#include <stdio.h>

int main(void)
{
    char ch;

    while ((ch = getchar()) != '#')
    {
        if (ch != '\n')
        {
            printf("Step 1\n");
            if (ch != 'c')
            {
                if (ch == 'b')
                    break;
                if (ch != 'h')
                    printf("Step 2\n");
                printf("Step 3\n");
            }
        }
    }
    printf("Done\n");

    return 0;
}
*/

/*  编程练习 */
#include <stdio.h>
#include <stdbool.h>

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

void exercise_1(void)
{
    // 1．编写一个程序读取输入，读到#字符停止，然后报告读取的空格数、换行符数和所有其他字符的数量。
    char ch;
    int spaces, newlines, others;

    spaces = newlines = others = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == ' ')
            spaces++;
        else if (ch == '\n')
            newlines++;
        else
            others++;
    }
    printf("%d spaces,%d newlines,%d others\n", spaces, newlines, others);
}

void exercise_2(void)
{
    // 2．编写一个程序读取输入，读到#字符停止。程序要打印每个输入的字符以及对应的ASCII码（十进制）。
    //每行打印8个“字符-ASCII码”组合。建议：使用字符计数和求模运算符（%）在每8个循环周期时打印一个换行符。
    char ch;
    int count;

    count = 0;
    while ((ch = getchar()) != '#')
    {
        if (ch == '\n')
        {
            putchar(ch);
            continue;
        }
        printf("%c-%d", ch, ch);
        if ((++count % 8) == 0)
            printf("\n");
    }
    printf("Done\n");
}

void exercise_3(void)
{
    // 3．编写一个程序，读取整数直到用户输入0。输入结束后，程序应报告用户输入的偶数（不包括0）个数、这些偶数的平均值、输入的奇数个数及其奇数的平均值。
    int count1, sum1; //奇数个数和总和
    int count2, sum2; //偶数个数和总和
    int value;

    count1 = sum1 = 0;
    count2 = sum2 = 0;
    while (scanf("%d", &value) == 1)
    {
        if (0 == value)
            break;
        else if ((value % 2) == 0)
        {
            count2++;
            sum2 += value;
        }
        else
        {
            count1++;
            sum1 += value;
        }
    }
    printf("%d odd numbers,average = %.2f,%d even numbers,average=%.2f\n", count1, (float)sum1 / count1, count2, (float)sum2 / count2);
}

void exercise_4(void)
{
    // 4．使用if　else语句编写一个程序读取输入，读到#停止。用感叹号替换句号，用两个感叹号替换原来的感叹号，最后报告进行了多少次替换。
    char ch;
    int count;

    count = 0;
    while ((ch = getchar()) != '#')
    {
        if ('.' == ch)
        {
            putchar('!');
            count++;
        }
        else if ('!' == ch)
        {
            printf("!!");
            count++;
        }
    }
    printf("Done,replaces count = %d\n", count);
}

void exercise_5(void)
{
    // 5．使用switch重写练习4。
    char ch;
    int count;

    count = 0;
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case '.':
        {
            putchar('!');
            count++;
            break;
        }
        case '!':
        {
            printf("!!");
            count++;
            break;
        }
        default:
            break;
        }
    }
    printf("Done,replaces count = %d\n", count);
}

void exercise_6(void)
{
    // 6．编写程序读取输入，读到#停止，报告ei出现的次数。
    //注意该程序要记录前一个字符和当前字符。用“Receive your eieio award”这样的输入来测试。
    char ch, prev;
    int count;

    count = 0;
    while ((ch = getchar()) != '#')
    {
        if ('i' == ch && 'e' == prev)
            count++;
        prev = ch;
    }
    printf("ei appeared %d times\n", count);
}

#define DOLLARS_PER_HNOUR 10.00
#define NORMAL_TIME 40
#define HNOUR_RATE 1.5
#define FIRST_TAX 300
#define FIRST_RATE 0.15
#define SECOND_TAX 150
#define SECOND_RATE 0.20
#define THIRD_RATE 0.25

void exercise_7(void)
{
    // 7．编写一个程序，提示用户输入一周工作的小时数，然后打印工资总额、税金和净收入。做如下假设：
    // a．基本工资 = 10.00美元/小时　　
    // b．加班（超过40小时） = 1.5倍的时间　　
    // c．税率：　前300美元为15%　　　　　　 　续150美元为20%　　　　　　 　余下的为25%
    //用#define定义符号常量。不用在意是否符合当前的税法。
    double salary, tax, income;
    int hnours;

    printf("Enter hnours you have worked for a week: ");
    scanf("%d", &hnours);
    if (hnours <= NORMAL_TIME)
        salary = hnours * DOLLARS_PER_HNOUR;
    else
        salary = NORMAL_TIME * DOLLARS_PER_HNOUR + (hnours - NORMAL_TIME) * HNOUR_RATE * DOLLARS_PER_HNOUR;
    if (salary <= FIRST_TAX)
        tax = salary * FIRST_RATE;
    else if (salary > FIRST_TAX && salary <= (FIRST_TAX + SECOND_TAX))
        tax = FIRST_TAX * FIRST_RATE + (salary - FIRST_TAX) * SECOND_RATE;
    else
        tax = FIRST_TAX * FIRST_RATE + SECOND_TAX * SECOND_RATE + (salary - FIRST_TAX - SECOND_TAX) * THIRD_RATE;

    income = salary - tax;
    printf("salary %.2f,tax %.2f,income %.2f\n", salary, tax, income);
}

void exercise_8(void)
{
    // 8．修改练习7的假设a，让程序可以给出一个供选择的工资等级菜单。使用switch完成工资等级选择。运行程序后，显示的菜单应该类似这样：
    //****************************************************
    // Enter the number corresponding to the desired pay rate or action
    // 1) $8.75/hr           2) $9,33/hr
    // 3) $10.00/hr          4) $11.20/hr
    // 5) quit
    //****************************************************
    //如果选择1～4其中的一个数字，程序应该询问用户工作的小时数。程序要通过循环运行，除非用户输入5。如果输入1～5以外的数字，程序应提醒用户输入正确的选项，
    //然后再重复显示菜单提示用户输入。使用#define创建符号常量表示各工资等级和税率。
    int menu;
    double rate;

    do
    {
        printf("****************************************************\n");
        printf("Enter the number corresponding to the desired pay or action\n");
        printf("1) $8.75/hr           2) $9,33/hr\n");
        printf("3) $10.00/hr          4) $11.20/hr\n");
        printf("5) quit");
        printf("****************************************************\n");
        menu = 0;
        if (scanf("%d", &menu) == 1)
        {
            switch (menu)
            {
            case 1:
            {
                rate = 8.75;
                break;
            }
            case 2:
            {
                rate = 9.33;
                break;
            }
            case 3:
            {
                rate = 10.00;
                break;
            }
            case 4:
            {
                rate = 11.20;
                break;
            }
            case 5:
                break;
            default:
            {
                printf("Enter a valid menu number:\n");
                continue;
            }
            }

            //接习题7代码
        }
        else
            printf("Enter a valid menu number:\n");
    } while (menu != 5);
}

void exercise_9(void)
{
    // 9．编写一个程序，只接受正整数输入，然后显示所有小于或等于该数的素数。
    unsigned long num, value, div;
    bool isPrime;

    while (scanf("%lu", &num) == 1)
    {
        if (1 >= num)
            continue;
        for (value = 2; value <= num; value++)
        {
            isPrime = true;
            for (div = 2; div < value; div++)
            {
                if (value % div == 0)
                {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime)
                printf("%lu is prime number\n", value);
        }
    }
    printf("Done\n");
}

void exercise_10(void)
{
    // 1988年的美国联邦税收计划是近代最简单的税收方案。它分为4个类别，每个类别有两个等级。下面是该税收计划的摘要（美元数为应征税的收入）：
    //类别      税金
    //单身      17850美元按15 % 计，超出部分接28 % 计
    //户主      23900美元按15 % 计，超出部分按28 % 计
    //已婚，共有 29750美元按15 % 计，超出部分按28 % 计
    //已婚，离异 14875美元按15 % 计，超出部分按28 % 计
    //例如，一位工资为20000美元的单身纳税人，应缴纳税费0.15×17850+0.28×（20000−17850）美元。
    //编写一个程序，让用户指定缴纳税金的种类和应纳税收入，然后计算税金。程序应通过循环让用户可以多次输入。
    int level;
    double total, tax;
    double start;

    do
    {
        printf("Enter your level and gains: ");
        if (scanf("%d %lf", &level, &total) != 2)
        {
            printf("Invalid input\n");
            continue;
        }
        switch (level)
        {
        case 0:
            start = 17850.00;
            break;
        case 1:
            start = 23900.00;
            break;
        case 2:
            start = 29750.00;
            break;
        case 3:
            start = 14875.00;
            break;
        default:
            printf("Invalid level\n");
            continue;
        }

        if (total < start)
            tax = total * 0.15;
        else
            tax = start * 0.15 + (total - start) * 0.28;
        printf("Your tax are $%.2lf", tax);
    } while (true);
}

void exercise_11(void)
{
    // 11．ABC邮购杂货店出售的洋蓟售价为2.05美元/磅，甜菜售价为1.15美元/磅，胡萝卜售价为1.09美元/磅。在添加运费之前，
    // 100美元的订单有5%的打折优惠。少于或等于5磅的订单收取6.5美元的运费和包装费，5磅～20磅的订单收取14美元的运费和包装费，
    //超过20磅的订单在14美元的基础上每续重1磅增加0.5美元。编写一个程序，在循环中用switch语句实现用户输入不同的字母时有不同的响应，
    //即输入a的响应是让用户输入洋蓟的磅数，b是甜菜的磅数，c是胡萝卜的磅数，q是退出订购。程序要记录累计的重量。即，如果用户输入4磅的甜菜，
    //然后输入5磅的甜菜，程序应报告9磅的甜菜。然后，该程序要计算货物总价、折扣（如果有的话）、运费和包装费。随后，程序应显示所有的购买信息：
    //物品售价、订购的重量（单位：磅）、订购的蔬菜费用、订单的总费用、折扣（如果有的话）、运费和包装费，以及所有的费用总额。
    char ch;
    double total, weight;
    double prices, discount, trans, cost;

    cost = total = 0.0;
    while ((ch = getchar()) != 'q')
    {
        switch (ch)
        {
        case 'a':
            printf("Enter artichoke weight(pounds): ");
            prices = 2.05;
            break;
        case 'b':
            printf("Enter beetroot weight(pounds): ");
            prices = 1.15;
            break;
        case 'c':
            printf("Enter carrot weight(pounds): ");
            prices = 1.09;
            break;
        default:
            continue;
        }

        scanf("%lf", &weight);
        total += weight;
        cost += weight * prices;
    }

    if (cost > 100.0)
        discount = cost * 0.05;
    if (total <= 5.0)
        trans = 6.5;
    else if (total > 5.0 && total < 20.0)
        trans = 14.0;
    else
        trans = 14.0 + (weight - 20.0) * 0.5;
    printf("%.2lf pounds,cost %.2lf and total %.2lf,discount %.2lf,trans %.2lf\n", total, cost, cost - discount + trans, discount, trans);
}