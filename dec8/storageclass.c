#include<stdio.h>

int c;//global var we can access this var in the entire block of code
int main()
{
    c=50;
    f1();//50
    f2();//70
    f1();//70 last overwritten value will be there

    f3(c);
    printf("%d",c);
}

void f1()
{
    int a =10; //Local Var
    printf("%d",c);
}

void f2()
{
    static int b ; //static var can be accessed only by the function in whih they were declared 
    //so accesiblty is local
    ++b;
    printf("%d",b);
    c=70;
    printf("%d",c);
}
void f3(int c)
{
    int c = 100;
    int a =10; //Local Var
    printf("%d",c);//50 overwrites to 100
}