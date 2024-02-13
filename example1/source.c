#include <stdio.h>
#include "header.h"
#define size 6

void market()
{
    int amt = 100;
    int item_price;
    while (amt >= 5)
    {
        printf("Enter the price of items you want to buy we have only 5 and 20 rupees items:\n");
        scanf("%d", &item_price);
        if (item_price == 5 || item_price == 20)
        {
            if (item_price <= amt)
            {
                amt = amt - item_price;
                printf("Balance amount is:%d\n", amt);
            }
            else
            {
                printf("Insufficient balance\n");
            }
        }
        else
        {
            printf("\n Sorry!! we don't have any item with %d please re-enter \n", item_price);
        }
    }
}

void dice()
{
    int input;
    printf("Enter the input:");
    scanf("%d", &input);
    int arr[] = {4, 2, 6, 1, 3, 5};
    // int size = sizeof(arr) / sizeof(arr[0]);
    int flag = 1;
    for (int i = 0; i < size; i++)
    {
        if (input >= 1 && input <= 6)
        {
            flag = 1;
            break;
        }
        flag = 0;
    }
    if (flag)
    {
        printf("%d is a number in dice\n", input);
    }
    else
    {
        printf("\n You have entered the invalid input\n");
        arraysort(arr);
    }
}

void arraysort(int *arr)
{
    printf("\n Sort the array\n");
    int temp = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Sorted array is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void digit_check()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    if (number >= 0 && number <= 9)
    {
        int res = (number * number * number);
        printf("%d cube is:%d", number, res);
    }
    if (number >= 10 && number <= 99)
    {
        int fact = 1;
        for (int i = 1; i <= number; i++)
        {
            fact = fact * i;
        }
        printf("Factorial of %d is:%d\n", number, fact);
    }

    if (number >= 100 && number <= 999)
    {
        while (number % 2 == 0)
        {
            printf("%d\n", 2);
            number = number / 2;
        }

        for (int i = 3; i * i <= number; i = i + 2)
        {
            if (number % i == 0)
            {
                printf("%d\n", i);
                number = number / i;
            }
        }
        if (number > 2)
        {
            printf("%d\n", number);
        }
    }
}

#include <stdio.h>

void ascdesc()
{
    int a[] = {4, 17, 12, 7, 3, 9, 13};
    int s = sizeof(a) / sizeof(a[0]);
    int t = 0;
    int i7 = 0;

    // Fixing the loop condition to properly find the index of 7
    for (int i = 0; i < s; i++)
    {
        if (a[i] == 7)
        {
            i7 = i;
            break; // Moved break inside the if statement
        }
    }

    // sorting elements before 7 in ascending order
    for (int i = 0; i < i7; i++)
    {
        for (int j = i + 1; j < i7; j++)
        {
            if (a[i] > a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    // sorting elements after 7 in descending order
    for (int i = i7 + 1; i < s; i++)
    {
        for (int j = i + 1; j < s; j++) // Fixed the loop condition (changed i < s to j < s)
        {
            if (a[i] < a[j])
            {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    // printing the sorted array
    for (int i = 0; i < s; i++)
    {
        printf("%d\n", a[i]);
    }
}

