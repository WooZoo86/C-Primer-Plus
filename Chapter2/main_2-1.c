#include <stdio.h>
/**
 * @brief 入口函数
 * 
 * @return int 
 */
int main(void) /*一个简单的c程序*/
{
    int num;                 /*定义一个名为num的变量*/
    num = 1;                 /*为num赋值*/
    printf("I am a simple"); /*使用printf函数输出*/
    printf("computer.\n");
    printf("My favorite number is %d because it is first.\n", num);
    getchar(); /*等待输入*/
    return 0;  //函数返回，结束程序
}
