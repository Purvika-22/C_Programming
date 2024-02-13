#include <stdio.h>
#include <stdlib.h> //for dynamic memory
void accept(int[], int n);
void display(int[], int n);

int main()
{

    int n;
    printf("Enter the size:");
    scanf("%d", &n);
    // void *ptr = malloc(n * sizeof(int));//basically return type of malloc is void*
    // bcoz malloc can be taken for int char and all so for void you have to type cast it
    //  printf("%d",(int)ptr[0]);//every time type casting is the complex thing

    int *ptr = (int *)malloc(n * sizeof(int)); // int ptr[6]

    // ptr++; //not to write bcoz its just a contiguos memory but we assues it as an array

    accept(ptr, n);
    display(ptr, n); // we have to pass the address i.e; ptr
    free(ptr);       // here the ptr will be free in the heap but not in the stack
    //  bcoz stack will be terminated after the main
    //  as ptr is a LV
    return 0;
}

void accept(int b[], int n) // we can also write it as int *b both are same
{
    printf("Enter the array elements:\n");
    for (int i = 0; i < n; i++)
    {
       // printf("\nEnter the element:\n");
        //scanf("%d",&*(b+i)); void accept(int *b,int n)
        scanf("%d",&b[i]); // combinations b[]
    }
}

void display(int b[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", b[i]);
    }
}