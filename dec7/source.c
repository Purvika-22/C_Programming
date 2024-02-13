// calculate the sum of 1st 10 even numbers and
// sum of first ten odd numbers using func called calculate(..)
// display the result in main()

// base value from user
// index value from user
// 2 raise to 3 ==> less than 0 overflow
// return status using flag

//looping ststement function
//u have got 100 rupees and purchase 2 items from the markst one itm 20 and other 5 rupess
//if you tell shop keeper 30 rupess that goes rejected
//and them keep on buying the items if u finished the 100 then you have to stop
//if 40 sry we don't have any product with 40  reenter it
//if u entered 20 then 100 - 20 = 80 or 5 then 80 - 5 = 75
//

//i'll give u a number check whether it is 1 digit 2 digit 3 digit
// if it is 1 digit --> cube of it
// if it is 2 digit --> prime of it /all prime factors
// if it is 3 digit --> factorial / perfect / amstrong 
//counter tesukoni check cheyali enni digits unayo

//roll a dice
//if u get 1 u do this
//if u get 2 u do this
//if u get 3 u do this
//if u get 4 u do this
//if u get 5 u do this
//if u get 6 u do this
//take an array check wheter the rolled number where present in that array 

//take an array if u have 7 in that array then sort the array before 7 and after 7 in the array



#include <stdio.h>
// #include "header.h"
void calculate(int *evenSum,int *oddSum)
{
    *evenSum = 0;
    *oddSum = 0;
    int n = 20;
    for(int i=1;i<=n;i++)
    {
        if(i % 2 == 0)
        *evenSum = *evenSum + i;
        else 
        *oddSum = *oddSum + i;
    }
    
}

int main() {
    int evenSum,oddSum;
    calculate(&evenSum,&oddSum);
    printf("Even sum is:%d \n Odd sum is:%d \n",evenSum,oddSum);
    return 0;
}