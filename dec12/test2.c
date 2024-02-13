// #include <stdio.h>
// void show()
// {
//     printf("this is show function");
// }
// void test1(void (*ptr)())
// {
//     ptr();
// }
// void test(int (*ptr1)(int x, int y)) // function pointer
// {
// }
// int add(int a, int b)
// {
//     return a + b;
// }
// int main()
// {
//     test1(show);
//     test(add(10, 50)); // when we are passing function as an argument then function pointer need to be there
//     // void (*ptr) ();//this ptr is a pointer to any function which is void & which will not take any arguemnt
//     void (*ptr)() = show;
//     ptr();
//     int (*ptr1)(int, int) = add;
//     int res = ptr1(10, 20);
//     printf("\n sum=%d", res);
//     // function pointer ->pointer which holds the address of  function
//     // or a pointer which points to the function
//     //
// }


#include <stdio.h>

void show() 
{
    printf("This is the show function\n");
}

int add(int a, int b) 
{
    return a + b;
}

void test1(void (*ptr)()) 
{
    ptr();
}

void test(int (*ptr1)(int x, int y)) 
{
    // You can do something with the function pointer if needed
    int result = ptr1(5, 10);
    printf("Result: %d\n", result);
}

int main() {
    // Calling the test1 function with show function as an argument
    test1(show);

    // Declaring a function pointer and assigning the add function to it
    int (*ptr1)(int, int) = add;

    // Calling the test function with the add function as an argument
    test(add);

    // Using the function pointer to call the add function
    int res = ptr1(10, 20);
    printf("Sum: %d\n", res);

    return 0;
}
