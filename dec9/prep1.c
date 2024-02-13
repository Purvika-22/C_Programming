#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("Enter the size of an array:");
    scanf("%d", &n);

    int *p = (int *)malloc(n * sizeof(int));
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Array elements:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr[i]);
    }
    free(p);

    return 0;
}