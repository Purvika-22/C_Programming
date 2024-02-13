#include <stdio.h>

int main()
{
    int a[5] = {44, 8, 55, 7, 70};
    int *p = a;

    printf("%d\n", (*p)++); // 44
    printf("%d \n%d\n", a[0], a[1]);// 45 8

    // printf("%d\n", *p++); // 44
    // printf("%d  %d %d\n", a[0], a[1], *p); // 44 8 8

    // printf("%d\n", *++p);               // 8
    // printf("%d %d %d", a[0], a[1], *p); // 44 8 8

    // printf("%d\n", ++*p);               // 45
    // printf("%d %d %d", a[0], a[1], *p); // 45 8 45

    // p = p + 3;
    // printf("%d", *p); // 7

    // int *p1 = &a[4];
    // int *p2 = a;
    // int n = p1 - p2; // 4
    // printf(" n=%d", n);

    /*
    p2=1000
    p1=1016
    p1-p2=1016-1000=16bytes/sizeof(int)=12/3=4
    */

//    int num=10;
//    int *ptr = &num;

    return 0;
}