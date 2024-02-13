#include <stdio.h>
void func(int *a)
{ 
    printf("Enter the value of a:");
    scanf("%d",&a);
}
int main()
{
    int a;
    func(&a);
    printf("Value of a is: %d\n",a);
    return 0;

}