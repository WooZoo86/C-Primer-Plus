/**
 * @file divisors.c
 * @author WooZoo86 (271005887@qq.com)
 * @brief  使用if嵌套语句显示一个数的约数
 * @version 0.1
 * @date 2022-01-14
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    unsigned long num, div;
    bool isPrime;

    printf("Enter an integer for analysis: ");
    printf("Enter q to quit.\n");
    while ((scanf("%lu", &num)) == 1)
    {
        for (div = 2, isPrime = true; div * div <= num; div++)
        {
            if (num % div == 0)
            {
                if (div * div == num)
                    printf("%lu is divisible by %lu.\n", num, div);
                else
                    printf("%lu is divisible by %lu and %lu.\n", num, div, num / div);
                isPrime = false;
            }
        }
        if (isPrime)
            printf("%lu is prime.\n", num);

        printf("Enter an integer for analysis: ");
        printf("Enter q to quit.\n");
    }
    printf("Bye\n");

    return 0;
}