/**
 * @file exercise.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 第4章课后习题
 * @version 0.1
 * @date 2022-01-11
 *
 * @copyright Copyright (c) 2022
 *
 */

/* 复习题
1．再次运行程序清单4.1，但是在要求输入名时，请输入名和姓（根据英文书写习惯，名和姓中间有一个空格），看看会发生什么情况？为什么？
答案：只获取到名，因为scanf遇到空白符号停止。

2．假设下列示例都是完整程序中的一部分，它们打印的结果分别是什么？　　
a．printf("He sold the painting for $%2.2f.\n", 2.345e2);　　//He sold the painting for $234.50.
b．printf("%c%c%c\n", 'H', 105, '\41');　　//Hi)
c．#define Q "His Hamlet was funny without being vulgar."　　　　　printf("%s\nhas %d characters.\n", Q, strlen(Q));　
His Hamlet was funny without being vulgar.
has 42 characters.
d．printf("Is %2.2e the same as %2.2f?\n", 1201.0, 1201.0);//Is 0.12e3 the same as 1201.00?

3．在第2题的c中，要输出包含双引号的字符串Q，应如何修改？
答案：printf("\"%s\"\nhas %d characters.\n", Q, strlen(Q));

4．找出下面程序中的错误。
define B booboo //缺少#
define X 10 //缺少#
main(int)//缺少返回类型，参数类型错误
{
    int age;
    char name;//应该使用字符数组
    printf("Please enter your first name.");
    scanf("%s",name);
    printf("All right, %c, what's your age?\n", name);//转换字符应该为%s
    scanf("%f", age);//转换字符应该为%d,参数而必须取地址
    xp = age + X;//xp未定义
    printf("That's a %s! You must be at least %d.\n", B,xp);//宏B应该是个字符串"booboo"
    rerun 0
}

5．假设一个程序的开头是这样：
#define BOOK "War and Peace"
int main(void)
{
    float cost =12.99;
    float percent = 80.0;

    //请构造一个使用BOOK、cost和percent的printf()语句，打印以下内容：
    //This copy of "War and Peace" sells for $12.99.
    //That is 80% of list.
    printf("This copy of \"%s\" sells for $%.2f.\n",BOOK,cost);
    printf("That is %.0f%% of list.\n",percent);
    return 0;
}

6．打印下列各项内容要分别使用什么转换说明？　　
a．一个字段宽度与位数相同的十进制整数　　   //%*.*d
b．一个形如8A、字段宽度为4的十六进制整数　　//%4X
c．一个形如232.346、字段宽度为10的浮点数　　//%10.3f
d．一个形如2.33e+002、字段宽度为12的浮点数　　//%12.2e
e．一个字段宽度为30、左对齐的字符串     //%-30s

7．打印下面各项内容要分别使用什么转换说明？　　
a．字段宽度为15的unsigned long类型的整数　　//%15lu
b．一个形如0x8a、字段宽度为4的十六进制整数　　//%4#x
c．一个形如2.33E+02、字段宽度为12、左对齐的浮点数　//%-12.2E　
d．一个形如+232.346、字段宽度为10的浮点数　　//%+10.3f
e．一个字段宽度为8的字符串的前8个字符   //%8.8s

8．打印下面各项内容要分别使用什么转换说明？　　
a．一个字段宽度为6、最少有4位数字的十进制整数　　//%6.4d
b．一个在参数列表中给定字段宽度的八进制整数　　//%*o
c．一个字段宽度为2的字符　　//%2c
d．一个形如+3.13、字段宽度等于数字中字符数的浮点数　　//%+*f
e．一个字段宽度为7、左对齐字符串中的前5个字符   //%-7.5s

9．分别写出读取下列各输入行的scanf()语句，并声明语句中用到变量和数组。　　
a．101　　  //int num; scanf("%d",&num);
b．22.32 8.34E−09　　//float x,y;scanf("%f %E",&x,&y);
c．linguini　　//char string[9];scanf("%s",string);
d．catch 22　　//char string[6];int num;scanf("%s %d",string,&num);
e．catch 22 （但是跳过catch）//int num;scanf("%*s %d",&num);

10．什么是空白？
答案：空白即空白符号，包括制表符、空格符号、换行符号。

11．下面的语句有什么问题？如何修正？
printf("The double type is %z bytes..\n", sizeof(double));
答案：%z该为%zd。

12．假设要在程序中用圆括号代替花括号，以下方法是否可行？
#define ( {
#define ) }
答案：意思弄反了，应该反过来定义。
*/

/* 编程练习 */
#include <stdio.h>
#include <string.h>
#include <float.h>

#define LITERS_PER_GALLON 3.785
#define KMS_PER_FEET 1.609

void exercise_1(void);
void exercise_2(void);
void exercise_3(void);
void exercise_4(void);
void exercise_5(void);
void exercise_6(void);
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

void exercise_1(void)
{
    // 1．编写一个程序，提示用户输入名和姓，然后以“名, 姓”的格式打印出来 float percent = 80.0;
    char name[100];
    char xing[20];
    printf("Enter your full name: ");
    scanf("%s %s", name, xing);
    printf("%s,%s\n", name, xing);
}

void exercise_2(void)
{
    // 2．编写一个程序，提示用户输入名字，并执行以下操作：　　
    // a．打印名字，包括双引号；　　
    // b．在宽度为20的字段右端打印名字，包括双引号；　　
    // c．在宽度为20的字段左端打印名字，包括双引号；　　
    // d．在比姓名宽度宽3的字段中打印名字。
    char name[100];

    printf("Enter your name: ");
    scanf("%s", name);
    printf("\"%s\"\n", name);                    // a
    printf("\"%20s\"\n", name);                  // b
    printf("\"%-20s\"\n", name);                 // c
    printf("\"%*s\"\n", strlen(name) + 3, name); // d
}

void exercise_3(void)
{
    // 3．编写一个程序，读取一个浮点数，首先以小数点记数法打印，然后以指数记数法打印。用下面的格式进行输出（系统不同，指数记数法显示的位数可能不同）：　　
    // a．The input is 21.3 or 2.1e+001.　　
    // b．The input is +21.290 or 2.129E+001.
    float value;

    printf("Entey a floating-point number: ");
    scanf("%f", &value);
    printf("The input is %.1f or %.1e\n", value, value);
    printf("The input is %+.3f or %.3E\n", value, value);
}

void exercise_4(void)
{
    // 4．编写一个程序，提示用户输入身高（单位：英寸）和姓名，然后以下面的格式显示用户刚输入的信息：
    // Dabney, you are 6.208 feet tall
    //使用foat类型，并用/作为除号。如果你愿意，可以要求用户以厘米为单位输入身高，并以米为单位显示出来。
    char name[100];
    float height;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your height in feet: ");
    scanf("%f", &height);
    printf("%s, you are %.3f feet tall\n", name, height);
    printf("Enter your height in centimeter: ");
    scanf("%f", &height);
    printf("%s, you are %.2f meter tall\n", name, height / 100.0f);
}

void exercise_5(void)
{
    // 5．编写一个程序，提示用户输入以兆位每秒（Mb/s）为单位的下载速度和以兆字节（MB）为单位的文件大小。程序中应计算文件的下载时间。注意，这里1字节等于8位。使用foat类型，并用/作为除号。该程序要以下面的格式打印3个变量的值（下载速度、文件大小和下载时间），显示小数点后面两位数字：
    // At 18.12 megabits per second, a file of 2.20 megabytes downloads in 0.97 seconds.
    float speed, size, time;

    printf("Enter download speed(Mb/s): ");
    scanf("%f", &speed);
    printf("Enter file size(MB): ");
    scanf("%f", &size);
    time = size / speed;
    printf("At %.2f megabits per second, a file of %.2f megabytes download in %.2f seconds.\n", speed, size, time);
}

void exercise_6(void)
{
    // 6．编写一个程序，先提示用户输入名，然后提示用户输入姓。在一行打印用户输入的名和姓，下一行分别打印名和姓的字母数。字母数要与相应名和姓的结尾对齐，如下所示：
    // Melissa Honeybee
    //       7        8
    //接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐，如下所示：
    // Melissa Honeybee
    // 7       8
    char name[100];
    char xing[10];
    size_t lname, lxing;

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter your xing: ");
    scanf("%s", xing);
    lname = strlen(name);
    lxing = strlen(xing);
    printf("%s %s\n", name, xing);
    printf("%*zd %*zd\n", lname, lname, lxing, lxing);
    printf("%s %s\n", name, xing);
    printf("%-*zd %-*zd\n", lname, lname, lxing, lxing);
}

void exercise_7(void)
{
    // 7．编写一个程序，将一个double类型的变量设置为1.0/3.0，一个foat类型的变量设置为1.0/3.0。分别显示两次计算的结果各3次：一次显示小数点后面6位数字；一次显示小数点后面12位数字；一次显示小数点后面16位数字。程序中要包含foat.h头文件，并显示FLT_DIG和DBL_DIG的值。1.0/3.0的值与这些值一致吗？
    float flt = 1.0 / 3.0;
    double dbl = 1.0 / 3.0;

    printf("FLT_DIG = %d,DBL_DIG = %d\n", FLT_DIG, DBL_DIG);
    printf("flt:%.6f,%.12f,%.16f\n", flt, flt, flt);
    printf("dbl:%.6f,%.12f,%.16f\n", dbl, dbl, dbl);
}

void exercise_8(void)
{
    // 8．编写一个程序，提示用户输入旅行的里程和消耗的汽油量。然后计算并显示消耗每加仑汽油行驶的英里数，显示小数点后面一位数字。接下来，使用1加仑大约3.785升，1英里大约为1.609千米，把单位是英里/加仑的值转换为升/100公里（欧洲通用的燃料消耗表示法），并显示结果，显示小数点后面1位数字。注意，美国采用的方案测量消耗单位燃料的行程（值越大越好），而欧洲则采用单位距离消耗的燃料测量方案（值越低越好）。使用#define创建符号常量或使用const限定符创建变量来表示两个转换系数。
    float miles, volumes;

    printf("Enter your travel miles(feet): ");
    scanf("%f", &miles);
    printf("Enter gas you have costed(gallon): ");
    scanf("%f", &volumes);
    printf("costed %.1f(mile/gallon).\n", miles / volumes);
    printf("costed %.1f(L/100kms).\n", (volumes * LITERS_PER_GALLON) * 100 / (miles * KMS_PER_FEET));
}