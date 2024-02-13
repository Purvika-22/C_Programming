#include <stdio.h>
#include<stdlib.h>

int main()
{
    char arr[5] = "kpit"; 
    printf("%s",arr);
    //printf("%s",arr[3]);//can't access
    //string array ends with /0 but char array doesn't end with /0 {'k','p','i','t'}
    //char array is just like an integer array
    char *p = arr;
    //p=p+2;
   // printf("\n %c",++*p);//l
    //printf("\n %c",*++p);
    //(*p)++
   printf("\n %c",++(*p));
   // printf("\n %c",(*p)++);//k
    // printf("\n str = %s\n",arr);
    
    return 0;
}