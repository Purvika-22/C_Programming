// month 1-12
#include <stdio.h>
int main()
{
    int month;
    printf("Enter the month number:");
    scanf("%d", &month);
    if (month >= 1 && month <= 12)
    {
        char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "June", "July", "Aug", "Sept", "Oct", "Nov", "Dec"};
        printf("The month is: %s\n", months[month - 1]);
    }
    else
    {
        printf("Invalid month number that you have entered\n");
    }
    return 0;
}

/*
sum of digits
sum of first 10 num
multiply first 10 num


*/