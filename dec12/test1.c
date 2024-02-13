#include <stdio.h>
int main()
{
    const int k = 5;
    int const *ptr = &k;
    //*ptr=20;
    printf("k=%d", k);
    // k=60;
    int a = 10;
    const int *p = &a;  // p is pointer to constant integer
    int const *p1 = &a; // p1 is pointer to constant integer

    int *const p2 = &a;
    *p2 = 7; // allowed
    // p2++; //error
    a = 20;
    ++a; // work
    //*p = 60; //error
    int b = 6;
    p = &b; // allowed
    p++;    // allowed
}