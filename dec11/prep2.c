// // Passing Arrays to Functions using Pointers
// // add one to each element in an array
// #include <stdio.h>
// void addone(int *arr, int size);
// int main()
// {
//     int arr[] = {2, 3, 4, 5};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     printf("original array:\n");
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     printf("\nModified array:\n");
//     addone(arr, size);
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d ", arr[i]);
//     }
//     return 0;
// }
// void addone(int *arr, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         arr[i] = arr[i] + 1;
//     }
// }

// #include <stdio.h>
// int factorial(int n);
// int main()
// {
//     int n = 4;
//     printf("%d\n", factorial(n));
// }
// int factorial(int n)
// {

//     if (n == 0 || n == 1)
//         return 1;
//     else
//         return n * factorial(n - 1);
// }

// #include<stdio.h>
// int main()
// {
//     int arr[] = {1,3,4,3,6};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     for(int i=0;i<size;i++)
//     {
//         int count=0;
//         for(int j=0;j<size;j++)
//         {
//             if (arr[i] == arr[j])
//             count++;
//         }
//         if(count>0)
//         printf("%d occurrs %d times\n",arr[i],count);
//     }
//     return 0;
// }