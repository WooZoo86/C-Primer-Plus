/**
 * @file exercise.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief 第二章课后习题，未校对标准答案
 * @version 0.1
 * @date 2022-01-11
 * 
 * @copyright Copyright (c) 2022
 * 
 */

/*2.11 复习题
1.C语言的基本模块是什么？
答：函数。

2．什么是语法错误？写出一个英语例子和C语言例子。
答：int a,int b;这就是一个语法错误的例子。

3．什么是语义错误？写出一个英语例子和C语言例子。
答：int num,squared,cubed;
    num=2;
    squared=num*num;
    cubed=squared*squared;
这就是个语义错误的例子，本来cubed立方是平方乘以自身，却被误认为平方乘以平方，结果错误。  

4．Indiana Sloth编写了下面的程序，并征求你的意见。请帮助他评定。
inculde studio.h//include没有#，头文件名错误并且没有尖括号，应改为<stdio.h>
int main{void}//函数应该用圆括号()
(//函数定义用大括号开始
    int s//变量声明没有分号结束

    s:=56;//赋值符号是=
    printf(There are s weeks in a year.);//printf的第一个参数是字符串，输出变量应该用格式化占位符%d替代，第二参数对应变量s
    return 0;
//函数定义用大括号结束

5．假设下面的4个例子都是完整程序中的一部分，它们都输出什么结果？
a.printf("Baa Baa Black Sheep.");
  printf("Hava you any wool?\n");
  输出：Baa Baa Black Sheep.ava you any wool?

b.printf("Begone!\n0 creature of lard!\n");
  输出：Begone!
       0 creature of lard!

c.printf("What?\nNo/nfish?\n");
  输出：What?
       No/nfish?

d.int num;
  num = 2;
  printf("%d + %d = %d",num,num,num + num);
  输出：2 + 2 = 4

6．在main、int、function、char、=中，哪些是C语言的关键字？
答：关键字有int、char，其它都为保留的标识符。

7．如何以下面的格式输出变量words和lines的值（这里，3020和350代表两个变量的值）？
There were 3020 words and 350 lines.
答：关键代码如下
int words,lines;
words = 3020; 
lines = 350;
printf("There were %d words and %d lines.",words,lines);

8.考虑下面的程序：
#inc1ude <stdio.h> 
int main(void)
{
    int a, b:
    a = 5;
    b=2;//第7行
    b = a; //第8行
    a = b; //第9行
    printf("%d %d\n", b, a); 
    return 0;
}
请问，在执行完第7、第8、第9行后，程序的状态分别是什么？
答：执行完第7行a=5,b=2；第8行后a=5,b=5；第9行后a=b=5。

9．考虑下面的程序：
#inc1ude <stdio.h> 
int main(void)
{
    int x, y;
    x = 10;
    y = 5;//第7行
    y = x + y;//第8行
    x = x * y; //第9行
    printf("%d %d\n",x,y);
    return 0;
}
请问，在执行完第7、第8、第9行后，程序的状态分别是什么？
答：执行完第7行x=10,y=5;第8行后x=10,y=15;第9行后x=150,y=15。
*/

/*2.12 编程练习*/
#include <stdio.h>

/*函数原型*/
void jolly(void);
void deny(void);
void br(void);
void ic(void);
void smile(void);
void one_three(void);
void two(void);

int main(void)
{
    //2.12.1
    printf("Zoo Woo\n");
    printf("Zoo\n");
    printf("Woo\n");
    printf("Zoo ");
    printf("Woo\n");

    //2.12.2
    printf("My name is Zoo Woo,and I am living at shenzhen.\n");

    //2.12.3
    int age, days;
    age = 25;
    days = 365 * age;
    printf("Your age is %d,so you have lived for %d days.\n", age, days);

    //2.12.4
    jolly();
    jolly();
    jolly();
    deny();

    //2.12.5
    br();
    printf(",");
    ic();
    ic();
    br();
    printf("\n");

    //2.12.6
    int toes, twice, squared;
    toes = 3;
    twice = 2 * toes;
    squared = toes * toes;
    printf("toes = %d,twice = %d,squared = %d.\n", toes, twice, squared);

    //2.12.7
    smile();
    smile();
    smile();
    printf("\n");
    smile();
    smile();
    printf("\n");
    smile();
    printf("\n");

    //2.12.8
    printf("starting now:\n");
    one_three();
    printf("done!\n");

    return 0;
}

/*函数定义*/
void jolly(void)
{
    printf("For he's a jolly good fellow!\n");
}

void deny(void)
{
    printf("which nobody can deny!\n");
}

void br(void)
{
    printf("Brazil,Russia");
}

void ic(void)
{
    printf("India,China\n");
}

void smile(void)
{
    printf("Smile!");
}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}

void two(void)
{
    printf("two\n");
}