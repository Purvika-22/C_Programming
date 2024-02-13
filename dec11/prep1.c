#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void revstring(char *str);
// void len(char *str);
int lend(char *str);
int main()
{  
    //char str[10] = "kpit"; // str is  a const pointer to non const string
    // int i = 0;
    // while (str[i] != '\0')
    //     i++;
    // printf("\nLength = %d", i);
    char str[8];
    printf("Enter the string:");
    gets(str);
    int l = lend(str);
    printf("length is:%d",l);
    printf("\nReverse of a string:");
    revstring(str);
    return 0;
}
int lend(char *str)
{
    char *p = str;
    while(*p != '\0')
    {
        p++;
    }
    return p-str;
}
// void len(char *str)
// {
//     int length = strlen(str);
//     printf("len : %d\n", length);

// }
void revstring(char *str)
{
     int length = strlen(str);
    // printf("len : %d\n", length);

    for (int i = 0; i < length / 2; i++)
    {
        int temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reverse string is : %s", str);
}

// Find the Maximum and Minimum Values in an Array

// #include <stdio.h>
// void minmax(int *arr, int size, int *min, int *max);
// int main()
// {
//     int arr[] = {1, 2, 6, 4, 9, 80};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int min, max;
//     minmax(arr, size, &min, &max);
//     printf("min value is :%d\n",min);
//     printf("max value is :%d\n",max);
//     return 0;
// }
// void minmax(int *arr, int size, int *min, int *max)
// {
//     *min = *max = arr[0];
//     for (int i = 0; i < size; i++)
//     {
//         if (arr[i] < *min)
//         {
//             *min = arr[i];
//         }
//         else if (arr[i] > *max)
//         {
//             *max = arr[i];
//         }
//     }
// }