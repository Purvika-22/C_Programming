#include <stdio.h>
#include "header.h"
#include <string.h>
int main()
{
    stud s1;
    s1.p = display;
    printf("Enter roll no:");
    scanf("%d", &s1.rollno);
    printf("Enter name");
    scanf("%s", s1.name);
    for (int i = 0; i < 3; i++)
    {
        printf("Enter marks:");
        scanf("%d", &s1.marks[i]);
    }

    printf("Enter student categoery 1-primary 2-secondary:\t");
    scanf("%d", &s1.stype);
    if (s1.stype == PRI_MARY)
    {
        printf("Enter the grade:\n");
        scanf("%c", &s1.pf.grade);
    }
    if (s1.stype == SECONDARY)
    {
        printf("Enter the percentage:\n");
        scanf("%lf ", &s1.pf.percentage);
    }
    // display(s1);
    s1.p(s1);
    callAvg(s1);
}