#include<stdio.h>
int main()
{
    int input;
    printf("Enter the size of  input:");
    scanf("%d",&input);
    int input1[] = {2,4,9,-4,3};
    int input2[input];
    int len1=0;
    int len2=0;
    for(int i=0;i<input;i++)
    {
        if(input1[i]> 0)
        {
            input1[len1] = input1[i];
            len1++;
        }
        else
        {
            input2[len2] = input1[i];
            len2++;
        }
    }
    int sum1=0;
    int sum2=0;
    for(int i=0;i<len1;i++)
    {
        sum1= sum1 + input1[i];
    }
    for(int i=0;i<len2;i++)
    {
        sum2= sum2 + input2[i];
    }
    int total = (len1 * sum1 ) + (len2 * sum2);
    printf("Total sum: %d\n",total);
    return 0;
}