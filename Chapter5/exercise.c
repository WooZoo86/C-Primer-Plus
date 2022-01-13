/**
 * @file exercise.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 第5章课后练习题
 * @version 0.1
 * @date 2022-01-12
 *
 * @copyright Copyright (c) 2022
 *
 */

/* 复习题
1．假设所有变量的类型都是int，下列各项变量的值是多少：
a.x=(2+3)*6;    //x=30
b.x=(12+6)/2*3; //x=27
c.y=x=(2+3)/4;  //y=x=1;
d.y=3+2*(x=7/2);//x=3,y=9

2．假设所有变量的类型都是int，下列各项变量的值是多少：
a.x=(int)3.8+3.3;   //x=6;
b.x=(2+3)*10.5;     //x=52;
c.x=3/5*22.0;       //x=0;
d.x=22.0*3/5;       //x=13;

3．对下列各表达式求值：
a.30.0/4.0*5.0;     //37.5
b.30.0/(4.0*5.0);   //1.5
c.30/4*5;           //35
d.30*5/4;           //37
e.30/4.0*5;         //37.5
f.30/4*5.0;         //35.0

4．请找出下面的程序中的错误。
int main(void)
{
    int i = 1;
    float n;
    printf("Watch out! Here come a bunch of fractions!\n");
    whi1e(i < 30)//控制变量i没有增加，少了花括号作为复合语句
        n = 1/i;//如果不改为1.0，表达式值永远为0.0
        printf(" %f",n)
    printf("That's all, folks!\n");
    return;//返回值0
}

5．这是程序清单5.9的另一个版本。从表面上看，该程序只使用了一条scanf()语句，比程序清单5.9简单。请找出不如原版之处。
#include <stdio.h>
#define S_TO_M  60
int main(void)
{
    int sec, min, left;
    printf("This program converts seconds to minutes and");
    printf("seconds.\n");
    printf("Just enter the number of seconds.\n");
    printf("Enter 0 to end the program.\n");
    while(sec > 0){
        scanf("%d",&sec);
        min = sec/S_TO_M;
        left = sec % S_TO_M;
        printf("%d sec is %d min,%d sec.\n",sec,min,1eft);
        printf("Next input?\n");
    }
    printf("Bye!\n");
    return 0;
}
进入while之前sec的值未定义，可能不会进入循环，假设进入循环，用户可以输入负数和0，计算没意义，同时也不会进入下一次循环。

6．下面的程序将打印出什么内容？
#include <stdio.h>
#define FORMAT "%s! C is cool!\n"
int main(void)
{
    int num = 10;

    printf(FORMAT, FORMAT);//  %s! C is cool!
    //! C is cool!
    printf("%d\n", ++num);//11
    printf("%d\n", num++);//11
    printf("%d\n", num--);//12
    printf("%d\n", num);//11
    return 0;
}

7．下面的程序将打印出什么内容？
#include <stdio.h>
int main(void)
{
    char c1, c2;
    int diff;
    float num;

    c1 = 'S';
    c2 = 'O';
    diff = c1 - c2;
    num = diff;
    printf("%c%c%c:%d% 3.2f\n", c1, c2, c1, diff, num);//SOS:4 4.00
    return 0;
}

8．下面的程序将打印出什么内容？
#include <stdio.h>
#define TEN 10
int main(void)
{
    int n = 0;

    while (n++ < TEN)
        printf("%5d", n);//    1    2    3    4    5    6    7    8    9   10
    printf("\n");
    return 0;
}

9．修改上一个程序，使其可以打印字母a～g。
#include <stdio.h>
#define CHAR_G 'g'
int main(void)
{
    char n = '`';

    while (n++ < CHAR_G)
        printf("%5c", n);
    printf("\n");
    return 0;
}

10．假设下面是完整程序中的一部分，它们分别打印什么？
a.
int x=0;
while(++x <3)
    printf("%4d",x);//   1   2
b.
int x=100;
while(x++ < 103)
    printf("%4d\n",x);//101
    //102
    //103
    printf("%4d\n",x);//   104
c.
char ch = 's';

while (ch < 'w')
{
    printf("%c", ch);//stuv
    ch++;
}
printf("%c\n", ch);//w

11．下面的程序会打印出什么？
#include <stdio.h>
#define MESG "COMPUTER BYTES DOG"
int main(void)
{
    int n = 0;

    while (n < 5)
        printf("%s\n", MESG);//一直在打印COMPUTER BYTES DOG，无法退出循环
        n++;
    printf("That's all.\n");
    return 0;
}

12．分别编写一条语句，完成下列各任务（或者说，使其具有以下副作用）：　　
a．将变量x的值增加10　　x=x+10;
b．将变量x的值增加1　　++x;
c．将a与b之和的两倍赋给c　　c=2*(a+b);
d．将a与b的两倍之和赋给c    c=2*a+2*b;

13．分别编写一条语句，完成下列各任务：　　
a．将变量x的值减少1　　--x;
b．将n除以k的余数赋给m　　m=n%k;
c．q除以b减去a的差，并将结果赋给p　　p=1q/b-a;
d．a与b之和除以c与d的乘积，并将结果赋给x    x=(a+b)/(c*d);

*/

/* 编程习题 */
#include <stdio.h>

void exercise_1(void);
void exercise_2(void);
void exercise_3(void);
void exercise_4(void);
void exercise_5(void);
void exercise_6(void);
void exercise_7(void);
double cubed(double value);
void exercise_8(void);
void exercise_9(void);
void Temperatures(double Fahrenheit);

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
    exercise_9();

    return 0;
}

#define MIN_PER_HNOUR 60
void exercise_1(void)
{
    // 1．编写一个程序，把用分钟表示的时间转换成用小时和分钟表示的时间。
    //使用#define或const创建一个表示60的符号常量或const变量。
    //通过while循环让用户重复输入值，直到用户输入小于或等于0的值才停止循环。
    int hnour, left;
    int mins;

    printf("Enter a minutes value(<=0 quit): ");
    scanf("%d", &mins);
    while (mins > 0)
    {
        hnour = mins / MIN_PER_HNOUR;
        left = mins % MIN_PER_HNOUR;
        printf("%d minutes equal %d hnours %d minutes.\n", mins, hnour, left);
        printf("Enter again: ");
        scanf("%d", &mins);
    }
    printf("now quit.\n");
}

#define STEPS 10
void exercise_2(void)
{
    // 2．编写一个程序，提示用户输入一个整数，然后打印从该数到比该数大10的所有整数（例如，用户输入5，则打印5～15的所有整数，包括5和15）。
    //要求打印的各值之间用一个空格、制表符或换行符分开。
    int value, count;

    count = 0;
    printf("Enter a integer value: ");
    scanf("%d", &value);
    while (count < STEPS)
    {
        printf("%d\t", value + count);
        count++;
    }
    printf("%d\n", value + count);
}

#define DAYS_PER_WEEK 7
void exercise_3(void)
{
    // 3．编写一个程序，提示用户输入天数，然后将其转换成周数和天数。例如，用户输入18，则转换成2周4天。以下面的格式显示结果：
    // 18 days are 2 weeks, 4 days
    //通过while循环让用户重复输入天数，当用户输入一个非正值时（如0或 - 20），循环结束。
    int weeks, left;
    int days;

    printf("Enter days value(<=0 quit): ");
    scanf("%d", &days);
    while (days > 0)
    {
        weeks = days / DAYS_PER_WEEK;
        left = days % DAYS_PER_WEEK;
        printf("%d days are %d weeks, %d days.\n", days, weeks, left);
        printf("Enter again: ");
        scanf("%d", &days);
    }
    printf("now quit.\n");
}

#define INCHES_PER_CM 0.39370
#define INCHES_PER_FEET 12
void exercise_4(void)
{
    // 4．编写一个程序，提示用户输入一个身高（单位：厘米），并分别以厘米和英尺、英寸为单位显示该值，允许有小数部分。
    //程序应该能让用户重复输入身高，直到用户输入一个非正值。其输出示例如下：
    // Enter a height in centimeters: 182
    // 182.0 cm = 5 feet, 11.7 inches
    // Enter a height in centimeters(<= 0 to quit) : 168.7
    // 168.7 cm = 5 feet, 6.41 inches
    // Enter a height in centimeters(<= 0 to quit) : 0
    // bye
    float height, inches;
    int feet;

    printf("Enter a height in centimeters: ");
    scanf("%f", &height);
    while (height > 0)
    {
        inches = height * INCHES_PER_CM;
        feet = inches / 12;
        printf("%.1f cm = %d feet, %.1f inches\n", height, feet, inches);
        printf("Enter a height in centimeters(<= 0 to quit) : ");
        scanf("%f", &height);
    }
    printf("bye\n");
}

void exercise_5(void)
{
    // 5．修改程序addemup.c（程序清单5.13），你可以认为addemup.c是计算20天里赚多少钱的程序（假设第1天赚$1、第2天赚$2、第3天赚$3，以此类推）。
    //修改程序，使其可以与用户交互，根据用户输入的数进行计算（即，用读入的一个变量来代替20）。
    int days, total, count;

    printf("Enter caculate days: ");
    scanf("%d", &days);
    total = count = 0;

    while (count++ < days)
    {
        total = total + count;
    }
    printf("total money are $%d\n", total);
}

void exercise_6(void)
{
    // 6．修改编程练习5的程序，使其能计算整数的平方和（可以认为第1天赚$1、第2天赚$4、第3天赚$9，以此类推，这看起来很不错）。
    // C没有平方函数，但是可以用n * n来表示n的平方。
    int days, total, count;

    printf("Enter caculate days: ");
    scanf("%d", &days);
    total = count = 0;

    while (count++ < days)
    {
        total = total + count * count;
    }
    printf("total money are $%d\n", total);
}

double cubed(double value)
{
    return value * value * value;
}

void exercise_7(void)
{
    // 7．编写一个程序，提示用户输入一个double类型的数，并打印该数的立方值。自己设计一个函数计算并打印立方值。
    // main()函数要把用户输入的值传递给该函数。
    double value;

    printf("Enter a double floating-point value: ");
    scanf("%lf", &value);
    printf("%lf\n", cubed(value));
}

void exercise_8(void)
{
    //编写一个程序，显示求模运算的结果。把用户输入的第1个整数作为求模运算符的第2个运算对象，该数在运算过程中保持不变。
    //用户后面输入的数是第1个运算对象。当用户输入一个非正值时，程序结束。其输出示例如下：
    // This program computes moduli.
    // Enter an integer to serve as the second operand: 256
    // Now enter the first operand: 438
    // 438 % 256 is 182
    // Enter next number for first operand(<=0 to quit): 1234567
    // 1234567 % 256 is 135
    // Enter next number for first operand (<=0 to quit): 0
    // Done
    int op1, op2;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as the second operand: ");
    scanf("%d", &op2);
    printf("Now enter the first operand: ");
    scanf("%d", &op1);
    while (op1 > 0)
    {
        printf("%d %% %d is %d\n", op1, op2, op1 % op2);
        printf("Enter next number for first operand (<=0 to quit): ");
        scanf("%d", &op1);
    }
    printf("Done\n");
}

void Temperatures(double Fahrenheit)
{
    const double CS_FRACTION = 5.0 / 9.0;
    const double CS_CONST = 32.0;
    const double KN_CONST = 273.16;
    double celsius, kelvin;

    celsius = CS_FRACTION * (Fahrenheit - CS_CONST);
    kelvin = celsius + KN_CONST;
    printf("Fahrenheit degree %.2lf is celsius degree %.2lf, or kelvin degree %.2lf\n", Fahrenheit, celsius, kelvin);
}

void exercise_9(void)
{
    // 9．编写一个程序，要求用户输入一个华氏温度。程序应读取double类型的值作为温度值，并把该值作为参数传递给一个用户自定义的函数Temperatures()。
    // 该函数计算摄氏温度和开氏温度，并以小数点后面两位数字的精度显示3种温度。要使用不同的温标来表示这3个温度值。下面是华氏温度转摄氏温度的公式：
    // 摄氏温度 = 5.0 / 9.0 * (华氏温度 - 32.0)
    // 开氏温标常用于科学研究，0表示绝对零，代表最低的温度。下面是摄氏温度转开氏温度的公式：
    // 开氏温度 = 摄氏温度 + 273.16
    // Temperatures()函数中用const创建温度转换中使用的变量。在main()函数中使用一个循环让用户重复输入温度，当用户输入q或其他非数字时，循环结束。
    // scanf()函数返回读取数据的数量，所以如果读取数字则返回1，如果读取q则不返回1。可以使用==运算符将scanf()的返回值和1作比较，测试两值是否相等。
    double Fahrenheit;

    printf("Enter a temperature(Fahrenheit): ");
    while (scanf("%lf", &Fahrenheit) == 1)
    {
        Temperatures(Fahrenheit);
        printf("Enter a temperature(Fahrenheit): ");
    }
    printf("Done\n");
}