// table
// factorial
// fibonacci
// sum of digits
// rev
#include <stdio.h>
#include "header.h"
#define NUM 100 //macros don't have a datatype <---diff btw const and macro 
//we can write ; after macros if we wirte ; then in its implementation also we will write ;
//so here unwanted ; will be created
//#define num 20;
//for(int i=1;i<num;i++)
//{
//        here num will become 20;; so error
//}
//but it is req as a part of replacement then you can give ;
//define NUM printf("KK");
// int main()
// {
//     int n = 5;
//     table(n);
//     return 0;
// }
enum Color{Red,Blue,Orange};
//static and global variables are stored in a data section 
//by default those were initialized with 0
int main()
{
    // static int x;

    // const int a = 10;
    // int b;
    // b=a;

    // enum Color c1 = Blue;
    // printf("\n%d",c1);

    auto int x;
    printf("%d",x);

    // int n =9;
    // table(n);

    // int num=9;
    // factorial(num);

    // int number = 47869;
    // sumofdigits(number);
    // rev(number);

    // int t=1;
    // fibanocci(t);
    int num = 153;
    isAmstrong(num);
}