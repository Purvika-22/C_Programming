#include <stdio.h>
int main()
{
    // int i;
    // for(i=1;i<=10;i++);//when ; this will be considered as the statement
    // this will be used in DSA like while we have to add any element
    // at the end this for is just used for travelling
    //   printf("%d\n",i);

    // when the whole loop is executed the last value of i is 11
    // printf("After the loop%d\n",i);
    // return 0;

    /* int i=1;
      for( ; ; )
      {
          if(i>10)
              break;
          printf("%d\n",i);
          i++;
      }
      return 0;
      */

    //    int i=1;
    //    do
    //    {
    //     if(i>10)
    //         break;
    //         printf("%d\n",i);
    //         i++;
    //    }
    //    while (i<=10);
    // return 0;

    //     int i=1;
    //    do
    //         printf("%d\n",i);
    //         //i++; if u separate that printf and i++
    //         //then it will give the error bcoz it is considered as two statemetns
    //     while (i++<10);

    //    return 0;

    // int mul=1;
    // for(int i=1;i<=5;i++)
    // {
    //     mul*=i;
    // }
    // printf("Sum of first 5 num: %d",mul);
    // return 0;

    // int mul=1;
    // int i=1;
    // do
    // {
    //     mul=mul*i;
    //     i++;
    // } while (i<11);
    // printf("Mul of first 10 num: %d",mul);

    // return 0;

    int fact = 1;
    int i = 1;
    int n = 4;

    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial is: %d", fact);
    return 0;
}
