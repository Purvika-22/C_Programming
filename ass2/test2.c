// #include <stdio.h>


// int* fun()//int* is returning the address
// //dont't try to return the address of the local var bcoz it's life tym get destroy after the func call
// {
//     int y=20;
//     return &y;
// }
// void show(int *k, int *t) // int *k=&a, int *t=&b
// {   
//     ++*k;
//     ++*t;
// }
// int main() // calling function --> a func which calls another func
// {
//     int a = 10, b = 20;
//     show(&a, &b); // called fun --> a func  called by another func
//     printf("%d %d ", a, b);
//     return 0;
// }


#include<stdio.h>
int main()
{
    int num;
    fun(&num);
    printf("%d " , num);
    return 0;
}
void fun(int *a)
{  
    int a = 10;       
    scanf("%d",&a);
}