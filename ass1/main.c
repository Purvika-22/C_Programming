#include <stdio.h>
#include "header.h" // void checkprime(int);
// int main()
// {
//     int n=-7;
//     checkpositive_negative(n);

//     return 0;
// }

int main()
{
    // isLeapyear(2000);

    int day, month, year;
    printf("Enter valid DD-MM-YR:\t");
    scanf("%d %d %d", &day, &month, &year);
    if (isValidDate(day, month, year))
    {
        printf("Valid Date\n");
    }
    else
    {
        printf("Enter the valid date\n");
    }
}