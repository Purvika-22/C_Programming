#include <stdio.h>
#include "header.h"
#include <string.h>

void display(stud s)
{
    printf("\n %d %s ", s.rollno, s.name);
    for (int i = 0; i < 3; i++)
    {
        printf("\t %d ", s.marks[i]);
    }

    switch (s.stype)
    {
    case PRI_MARY:
        printf("\n Grade = %c", s.pf.grade);
        break;
    case SECONDARY:
        printf("\n Percentage = %lf", s.pf.percentage);
        break;
    default:
        break;
    }
}

void callAvg(stud s)
{
    int sum=0;
    for(int i=0;i<3;i++)
    {
        sum +=s.marks[i];
    }
    float avg  = (float)sum/3;
    printf("\n Avg = %f",avg);
}