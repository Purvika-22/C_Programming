#include <stdio.h>
#include <stdlib.h>
int main()
{

    int n;
    printf("Enter the size:");
    scanf("%d", &n);

    int *ptr = (int *)calloc(n, sizeof(int));
    accept(ptr,n);
    display(ptr,n);
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ptr[i]);
    }

    int n1;
    printf("Enter the new size that you want to add:");
    scanf("%d", &n1);

    ptr = (int *)realloc(ptr, (n1 + n) * sizeof(int));
    // realloc will take the another size and add to the previous and get multiply with the size
    // why again pointer means?
    // here realloc will add the (n+n1) and consider the new memory for this size
    // and it will erase the previous memory
    // already we have the pointer (ptr) so use that no need of new pointer
    printf("Enter the new elements:");
    for (int i = n; i < (n + n1); i++)
    {
        scanf("%d", &ptr[i]);
    }
    display(ptr,n+n1);
    free(ptr);
}