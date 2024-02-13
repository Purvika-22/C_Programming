#include <stdio.h>
#define size 5

void function1(int[]);
void occurrance(int[]);
void occurancecount(int[]);
void minmax(int[]);

int main()
{
    int a[size] = {3, 4, 6, 4, 8};
    // function1(a);
    // occurancecount(a);
    occurrance(a);
    // minmax(a);
    return 0;
}
void minmax(int *c)
{
    int min = c[0];
    int max = c[0];
    for (int i = 0; i < size; i++)
    {
        if (c[i] < min)
            min = c[i];
        else if (c[i] > max)
            max = c[i];
    }
    printf("Min element: %d\n", min);
    printf("Max element: %d\n", max);
}

void occurrance(int *c)
{
    int num;
    printf("Input from user:");
    scanf("%d", &num);
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (num == c[i])
        {
            count++;
        }
    }
    printf("%d is occurred %d times", num, count);
}

void occurancecount(int *c)
{
    for (int i = 0; i < size; i++)
    {
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (c[i] == c[j])
                count++;
        }
        printf("\n %d Count is:%d\n", c[i], count);
    }
}

void function1(int *c)
{
    printf("Original array is:\n");
    for (int i = 0; i < size; i++)
        printf("%d\n", *(c + i));
    printf("Reverse array is:\n");
    for (int i = size - 1; i >= 0; i--)
        printf("%d \n", *(c + i));
}
