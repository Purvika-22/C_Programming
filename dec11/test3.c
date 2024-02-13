// nested structure
#include <stdio.h>
struct Address
{
    int pincode;
    char city[20];
    char state[20];
};

struct Student
{
    int rollno;
    char name[20];
    struct Address add;
} s1;
//s1.add.pincode;
//s1.rollno
struct Product
{
    int id;
    char name[20];
    int price;
    struct Address dadd;
} p1;

int main()
{
    struct  Student s = {1,"pp"};
    struct  Student s1;

    scanf("%d",&s1.rollno);
    scanf("%s",s1.name);
    scanf("%d",&s1.add.pincode);
    scanf("%s",s1.add.city);
    scanf("%s",s1.add.state);

    printf("Print overall details of the student\n");
    printf("%d \n",s1.rollno);
    printf("%s\n",s1.name);
    printf("%d\n",s1.add.pincode);
    printf("%s\n",s1.add.city);
    printf("%s\n",s1.add.state);
    
    return 0;
    
}