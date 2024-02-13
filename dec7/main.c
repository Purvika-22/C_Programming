#include <stdio.h>
// #include"header.h"

// int main() {
//     int evenSum,oddSum;
//     calculate(&evenSum,&oddSum);
//     printf("Even sum is:%d and odd sum is:%d",evenSum,oddSum);
//     return 0;
// }

// base value from user
// index value from user
// 2 raise to 3 ==> less than 0 overflow
// return status using flag

#include<math.h>
int main()
{
    int base, index;
    printf("Enter base:");
    scanf("%d", &base);
    printf("Enter index:");
    scanf("%d", &index);
    int result = 1;    
    for (int i = 0; i < index; i++)
    {
       result = result * base;
    }
    
        printf("base %d raise to the power of %d is:%d\n",base, index, result);
        return 0;
    
}