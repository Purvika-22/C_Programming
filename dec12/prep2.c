// array tesukoni every element sq chesi max min find out
//  max - min = ?(x)
//  find out next prime to the x

#include <stdio.h>
void sqarr(int arr[], int n);
void minmax(int arr[], int n);
void nextprime(int n);
int main()
{
    int n;
    printf("Enter the size of an array:\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sqarr(arr, n);
    // minmax(arr, n);
    nextprime(n);

    return 0;
}

void sqarr(int arr[], int n)
{
    printf("Squared array elements\n");
    
    for (int i = 0; i < n; i++)
    {

        arr[i]= arr[i] * arr[i];
        printf("%d\t", arr[i]);
        nextprime(arr[i]);
    }
}
// void minmax(int arr[], int n)
// {
//     int min = arr[0];
//     int max = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] < min)
//         {
//             min = arr[i];
//         }
//         else if (arr[i] > max)
//         {
//             max = arr[i];
//         }
//     }

//     printf("\nMin ele is:%d\n", min);
//     printf("\nMax ele is:%d\n", max);
//     int res = max - min;
//     printf("Max-Min is : %d",res);
//     nextprime(res);
// }

void nextprime(int n)
{
    int next = n + 1;
    while (1)
    {
        int flag = 1;
        for (int i = 2; i * i <= n; i++)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            printf("\nNext prime number for %d is: %d\n", n, next);
            break;
        }
        next++;
    }

    // for (int i = 0; i < n; i++)
    // {
    //     printf("\nNext prime number is: %d\n", arr[i]);
    // }
}
