#include<stdio.h>
int main()
{

    // month 1-12
    //day 32 - 1 - 2004

    //case 7/2
    //case 65
    // case 'A'
    //continue
    //default in begin
    //cases in seq
    //break

    int a=10;
    int b=-a;
    // a  10
    //b -10

    int *arr[10];//array integer
    char ch ='a';//p is the pointer to array integer
    printf("%d",ch);

    int yr=2000;
    if((yr%4==0)&&(yr%100!=0)||(yr%400==0))
        printf("\nEntered year is leap year");
    else
        printf("\nEntered year is non leap year");

    char letter = 'A';
    int myascii = (int)letter;
    printf("\n%c letter ascii value is: %d",letter,myascii);

    int num1=4;
    int num2=6;
    if(num1>0)
        printf("It's an +ve number");
    else
        printf("It's an odd number");

    if(num2%2==0)
        printf("Even number");
    else
        printf("Odd num");

    char cha = 'f';
    if((int)cha>=65 && (int)cha<=90)
        printf("Uppercaseletter");
    else if((int)cha>=97 && (int)cha<=122)
        printf("lowercaselettter");
    else if((int)cha>=48 && (int)cha<=57)
        printf("Digit");  
    else
        printf("It's a special char");

    int SP=900;
    int CP=800;
    if(SP>CP)
    printf("It's profit");
    else
    printf("Its loss");

    return 0;      

}

