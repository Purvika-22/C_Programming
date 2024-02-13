#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    // int x = 10;
    // int *p1 = &x;
    // int a[3][4];
    // 3 row 4 column
    // []  *
    // unary
    // right to left
    // read subscript first and then pointer
    int a = 10, b = 20, c = 30;
    int *p[3] = {&a, &b, &c}; // p is array of pointers
    for(int i=0;i<3;i++)
    {
       // printf("%ls \t",p[i]); //p[i] gives address
        printf("%d\t",*p[i]); //*p[i]values
    }
    printf("%d\t",*p[0]);

    return 0;
}