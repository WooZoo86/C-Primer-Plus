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

#include <stdio.h>

int main(void)
{
    float percent = 80.0;
    printf("%.0f\n", percent);
    return 0;
}