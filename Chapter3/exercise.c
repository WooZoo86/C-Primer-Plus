/**
 * @file exercise.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 第三章课后练习题
 * @version 0.1
 * @date 2022-01-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/* 复习题 
1．指出下面各种数据使用的合适数据类型（有些可使用多种数据类型）：　　
a．East Simpleton的人口　　unsigned long
b．DVD影碟的价格　　float
c．本章出现次数最多的字母　　char
d．本章出现次数最多的字母次数   unsigned short

2．在什么情况下要用long类型的变量代替int类型的变量？
答：当考虑移植到16位平台的时候，32位数据类型应该用long，在16位平台int代表16位，long代表32位。

3．使用哪些可移植的数据类型可以获得32位有符号整数？选择的理由是什么？
答：当需要精确宽度数据选择int32_t,需要至少宽度数据选择int_least32_t，需要快速运算的数据选择int_fast32_t，需要保存所有数据大小选择intmax_t。

4．指出下列常量的类型和含义（如果有的话）：　　
a．'\b'　　char，代表不可见字符退格
b．1066　　int，十进制有符号整数
c．99.44　　double，十进制有符号浮点数
d．0XAA　　int，170的十六进制形式
e．2.0e30 double，指数表达形式的浮点数

5．Dottie Cawm编写了一个程序，请找出程序中的错误。
include <stdio.h>//缺少 #
main//缺少()
(//应该使用{
    float g; h; //同一行声明变量使用逗号分隔，h变量未使用
    float tax, rate;

    g=e21;//缺少有效数据
    tax = rate * g;//rate未赋值，可能溢出
    //main函数没有返回值
)//应该使用配对的}

6．写出下列常量在声明中使用的数据类型和在printf()中对应的转换说明：
12          int     %d
0X3         int     %#X
'C'         int     %c
2.34E07     double  %3.2E
'\040'      char    %c
7.0         double  %f
6L          long    %ld
6.0f        float   %f
0x5.b6p12   double  %a

7．写出下列常量在声明中使用的数据类型和在printf()中对应的转换说明（假设int为16位）：
012         int             %o
2.9e05L     long double     %le
's'         char            %c
100000      long            %ld
'\n'        char            %d
20.0f       float           %f
0x44        int             %x
-40         int             %d

8．假设程序的开头有下列声明：
int imate = 2;
long shot = 53456;
char grade = 'A';
f1oat log = 2.71828;
把下面printf()语句中的转换字符补充完整：
printf("The odds against the %d were %hd to 1.\n", imate, shot);
printf("A score of %f is not an %c grade.\n", log, grade);

9．假设ch是char类型的变量。分别使用转义序列、十进制值、八进制字符常量和十六进制字符常量把回车字符赋给ch（假设使用ASCII编码值）。
答：ch='\r';ch=13;ch=015;ch=0xD;

10．修正下面的程序（在C中，/表示除以）。
答：修正如下
int main(void)
{
    unsigned int cows;
    unsigned int legs;
    printf("How many cow legs did you count?\n");
    scanf("%u",legs);
    cows = legs / 4;
    printf("That implines there are %u cows.\n",cows);

    return 0;
}

11．指出下列转义序列的含义：　　
a．\n   换行　　
b．\\   打印‘\’
c．\"   打印'"'　　
d．\t   水平制表符
*/

/* 编程练习 */
#include <stdio.h>

int main(void)
{
    //1．通过试验（即编写带有此类问题的程序）观察系统如何处理整数上溢、浮点数上溢和浮点数下溢的情况。
    int max = 2147483647;
    unsigned int umax = 4294967295;
    printf("max = %d,max+1 = %d\n", max, max + 1);
    printf("umax = %u,umax+1=%u\n", umax, umax + 1);
    float fmax = 3.4e38;
    float fmin = -3.4e-38;
    printf("fmax = %e,fmin = %e\n", fmax * 10.0f, fmin / 10.0f);

    //2．编写一个程序，要求提示输入一个ASCII码值（如，66），然后打印输入的字符。
    int asc;
    printf("Please enter a ASCII value: ");
    scanf("%d", &asc);
    printf("You enter: %c\n", asc);

    //3．编写一个程序，发出一声警报，然后打印下面的文本：
    printf("\aStartled by the sudden sound, Sally shouted,\n");
    printf("\"By the Great Pumpkin, What was that!\"\n");

    //4．编写一个程序，读取一个浮点数，先打印成小数点形式，再打印成指数形式。然后，如果系统支持，再打印成p记数法（即十六进制记数法）。按以下格式输出（实际显示的指数位数因系统而异）：
    float value;
    printf("Enter a floating-point value: ");
    scanf("%f", &value);
    printf("fixed-point notation: %f\n", value);
    printf("exponential notation: %e\n", value);
    printf("p notation: %a\n", value);

    //5．一年大约有3.156×107秒。编写一个程序，提示用户输入年龄，然后显示该年龄对应的秒数。
    unsigned int age;
    float secs = 3.156e7f;
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("ages = %d,seconds = %e\n", age, secs);

    //6．1个水分子的质量约为3.0×10−23克。1夸脱水大约是950克。编写一个程序，提示用户输入水的夸脱数，并显示水分子的数量。
    float kuado;
    printf("Enter water kuado number: ");
    scanf("%f", &kuado);
    printf("Water molecules number are %f\n", (kuado * 950.0f) / 3.0e-23);

    //7．1英寸相当于2.54厘米。编写一个程序，提示用户输入身高（/英寸），然后以厘米为单位显示身高。
    float height;
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Your height is %f cm\n", height * 2.54f);

    //8．在美国的体积测量系统中，1品脱等于2杯，1杯等于8盎司，1盎司等于2大汤勺，1大汤勺等于3茶勺。编写一个程序，提示用户输入杯数，并以品脱、盎司、汤勺、茶勺为单位显示等价容量。思考对于该程序，为何使用浮点类型比整数类型更合适？
    float cup_num;
    printf("Enter cup numbers: ");
    scanf("%f", &cup_num);
    printf("%f cups = %f pindo = %f ounce = %f datangshao = %f chashao");

    return 0;
}