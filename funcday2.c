#include<stdio.h>
// stack- local variables - declared inside a block{ }
// data section - global variable - declare outside the block
//int a = 50;//Global var
void display()
{
    //int b=50;
    printf("hii\n");
}
int main()
{
    int b = 10;//local var
    //access + life time
    display();
    return 0;

}
