/**
 * @file arrchar.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief   指向字符串的指针数组和char类型数组的数组
 * @version 0.1
 * @date 2022-01-17
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

#define SLEN 40
#define LIM 5

int main(void)
{
    const char *mytalents[LIM] = {//存放的是5个指针
                                  "Adding numbers swiftly",
                                  "Multiplying accurately",
                                  "Stashing data",
                                  "Following instructions to the letter",
                                  "Understanding the C launguage"};
    char yourtalents[LIM][SLEN] = {//实实在在的内存字符数组
                                   "Walking in a straight line",
                                   "Sleeping",
                                   "Watching television",
                                   "Mailing letters",
                                   "Reading email"};

    int i;

    puts("Let's compare talents.");
    printf("%-36s   %-25s\n", "My Talents", "Your Talents");
    for (i = 0; i < LIM; i++)
        printf("%-36s   %-25s\n", mytalents[i], yourtalents[i]);
    printf("\nsizeof mytalents: %zd,sizeof yourtalents: %zd\n", sizeof(mytalents), sizeof(yourtalents));

    return 0;
}