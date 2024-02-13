// // structures and union
// // structure can be used under a single var u can store a grp of var of diff data types
// #include <stdio.h>
// #include <string.h>

// struct Employee
// {
//     // empid,sal,name ----- elemnts/attributes/members
//     int empid; // u shouldn't initialize any member inside the template int empid=90;//wrong
//     char name[10];
//     double salary;
// } e2; // can also be declared here at the end
// void display(struct Employee);
// void accept(struct Employee);
// void accept1(struct Employee *);

// // struct Student
// // {
// //     // empid,sal,name ----- elemnts/attributes/members
// //     int empid; // u shouldn't initialize any member inside the template int empid=90;//wrong
// //     char name[10];
// //     double salary;
// // } s4;
// int main()
// {
//     struct Employee e1;
//     accept(e1);
//     printf("\n%d %s %lf", e1.empid, e1.name, e1.salary);
//     struct Employee e2;
//     accept1(&e2);
//     printf("\n %d %s %lf \n", e2.empid, e2.name, e2.salary);
//     display(e1);

//     // struct Employee e1 = {515, "Purvika", 25000};
//     // printf("\n %d %s %lf", e1.empid, e1.name, e1.salary);

//     // struct Employee e3 = {7};
//     // printf("\n %d %s %lf", e3.empid, e3.name, e3.salary);

//     // strcpy(e3.name, "lav");
//     // e3.salary = 90400;
//     // printf("\n %d %s %lf", e3.empid, e3.name, e3.salary);

//     // struct Employee e4 = e3;
//     // printf("\n %d %s %lf", e4.empid, e4.name, e4.salary);

//     // // struct Student s4 = e3;//Data types should match struct Student != struct employee
//     // // printf("\n %d %s %lf", e4.empid, e4.name, e4.salary);
//     // strcpy(e4.empid,s4.empid);
//     // strcpy(e4.name,s4.name);
//     // strcpy(e4.salary,s4.salary);

//     // // e1 is LV if u want to initialze then go with the same order
//     // // e1 is a var data type of e1 is struct Employee
//     //  Employee e1; // compiler can't recognize bcoz employee is not a
//     // pre data type as int,char... employee is name of a structure
//     //  struct e1; //wrong
//     // how much amt of memory is allocated for this?
//     // 0 bcoz abv struct employee is a template for template no memory is allocated
//     // size expected 4 + 30 + 8 = 42
//     // but we can't tell its 42
//     // structure padding : (4,30,8) rounded up and anyways it gives 42
// }
// void accept(struct Employee e1)
// {
//     getchar();
//     printf("\nEmployee ID:\t");
//     scanf("%d", &e1.empid);
//     printf("\nEmployee Name:\t");
//     scanf("%s", e1.name);
//     printf("\nEmployee Salary:\t");
//     scanf("%lf", &e1.salary); // it will give the garbage value if we give e1.salary
// }

// void accept1(struct Employee *p)
// {
//     printf("\nEmployee ID:\t");
//     scanf("%d", p->empid);
//     printf("\nEmployee Name:\t");
//     scanf("%s", p->name);
//     printf("\nEmployee Salary:\t");
//     scanf("%lf", p->salary); // data can be taken while using pointers is ->
// }
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct BankAccount
{
    int accno;
    int bal;
} bnk; // datatype for bank acc

int main()
{
    int *a = malloc(1 * sizeof(int));

    bnk arr[10];

    bnk *b = (bnk *)malloc(1 * sizeof(bnk));

    printf("Enter acc num:");
    scanf("%d", &b->accno);

    printf("Enter acc bal:");
    scanf("%d", &b->bal);

    bnk b1;
    bnk *p = &b1;

    bnk *b;
    struct BankAccount b1;
    bnk b2;
    // struct bnk b3;//error
}