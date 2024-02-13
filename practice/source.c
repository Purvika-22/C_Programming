#include <stdio.h>
#include "header.h"

void table(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
}

void factorial(int num)
{
    int fact = 1;
    for (int i = 1; i <= num; i++)
    {
        fact = fact * i;
    }
    printf("\nFatorial is:%d ", fact);
}

void sumofdigits(int number)
{
    int sum = 0;
    while (number > 0)
    {
        sum = sum + (number % 10);
        number = number / 10;
    }
    printf("\n Sum of digits is : %d", sum);
}

void rev(int number)
{
    int rev = 0;
    while (number != 0)
    {
        rev = rev * 10 + (number % 10);
        number = number / 10;
    }
    printf("\n Rev Of Num is : %d\n", rev);
}
void isAmstrong(int num)
{
    int N = num;
    int sum = 0;
    while (num > 0)
    {
        int r = num % 10;
        sum = sum + (r * r * r);
        num = num / 10;
    }
    if(N == sum)
    {
        printf("\n%d the number is amstrong\n",sum);
    }
    else{
        printf("%d is not an amstrong number",sum);
    }
}

void fibanocci(int t)
{
    int t1 = 0;
    int t2 = 1;
    int t3;
    if (t == 1)
        printf("0");
    else if (t == 2)
        printf("0  1");
    else
    {
        printf("0 \t 1 \t");
        for (int i = 3; i <= t; i++)
        {
            t3 = t1 + t2;
            printf("%d\t", t3);
            t1 = t2;
            t2 = t3;
        }
    }
}
