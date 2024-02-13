// // Write a function that receives 5 integers and returns the sum, average
// // and standard deviation of these numbers. Call this function from main( )
// // and print the results in main( ).

// #include <stdio.h>
// void calc(int *sum,int *avg);
// int main()
// {
//     int sum , avg;
//     calc(&sum,&avg);
//     printf("Sum is:%d\n Avg is:%d\n",sum,avg);
//     return 0;
// }
// void calc(int *sum, int *avg)
// {
//     int n1, n2, n3, n4, n5;
//     printf("Enter values:");
//     scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
//     *sum = (n1 + n2 + n3 + n4 + n5) ;
//     *avg = *sum / 5;
// }

// // Write a program that defines a function that calculates power of one
// // number raised to another and factorial value of a number in one call.

// #include<stdio.h>

// void power_fact(int n1,int n2,int num,int *pow,int *fact);
// int main()
// {
//     int n1 ;
//     int n2;
//     int num;
//     int pow,fact=1;
//     printf("Enter base and exponent:");
//     scanf("%d %d",&n1,&n2);
//     printf("Enter the number for factorial:");
//     scanf("%d", &num);
//     power_fact(n1,n2,num,&pow,&fact);
//     printf("Power is:%d \n Factorial is:%d",pow,fact);
//     return 0;
// }

// void power_fact(int n1,int n2,int num,int *pow,int *fact)
// {

//     int res = 1;
//     for(int i=0;i<n2;i++)
//     {
//         res = res * n1;
//     }
//     *pow = res;
//     //factorial
//     *fact = 1;
//     for(int i=1;i<=num;i++)
//     {
//         *fact = *fact * i;
//     }

// }

// swap two num using pointers
// #include <stdio.h>
// void swap(int *n1, int *n2, int *a, int *b);
// int main()
// {
//     int a = 10;
//     int b = 19;
//     printf("Before swapping: a = %d, b = %d\n", a, b);

//     swap(&a, &b, &a, &b);

//    // printf("After swapping: a = %d, b = %d\n", a, b);

//     return 0;
// }
// void swap(int *n1, int *n2, int *a, int *b)
// {
//     int temp;
//     temp = *n1;
//     *n1 = *n2;
//     *n2 = temp;
//     printf("After swaping  %d %d \n", *a, *b);
// }


//Calculate Average using Dynamic Memory Allocation
#include <stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter size:");
    scanf("%d",&n);
    int *num = (int *) malloc(n*sizeof(int));
    printf("Enter the eleemnts:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int sum = 0;

    for(int i=0;i<n;i++)
    {
        sum = sum + num[i];
    }
    printf("Sum is:%d",sum);
    free(num);
    return 0;
}