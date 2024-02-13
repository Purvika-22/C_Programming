#include <stdio.h>
int main()
{

    // int *ptr;
    // printf("%ld\n", sizeof(ptr)); // on linux for pointer it is 8 bytes

    int arr[5] = {40, 60, 70, 55, 66};
    printf("%ld\n", sizeof(arr));
    arr[2] = 71;
    int *ptr = arr;       // array itself is a poniter so no need for &arr it's just arr
    printf("%d", *++ptr); // 60
    //*ptr++;    //              // p points to the next element
    //++*ptr; // 40 as 41
    //++(*ptr); // 40 as 41

    printf("%d\n",(*ptr)++); // (arr[0])++
    printf("%d\n",arr[0]);
   

    // const pointer to non constant data / element

    // char ch = 'A';
    // //char *chr = &ch;
    // char *chr;
    // chr = &ch;
    // char ch1 = ++*chr;
    // printf("%c\n",ch1);
    // printf("%c\n",*chr);
    // printf("%p\n",chr);

    // int a = 10;
    // int *p = &a;
    // printf("%d", *p);
    // int b = ++*p;

    // int c = *p++;
    // printf("%d %d ",a,c);
    // printf("\n %d", *p); //segmentation fault

    // printf("%d",a);

    // int b = ++*p;
    // int c = *p++;
    // int d = (*p)++;

    // printf("b = %d \t c= %d \t d = %d \t *p = %d " ,b, c ,d ,*p );

    return 0;
}