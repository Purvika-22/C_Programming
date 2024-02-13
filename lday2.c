#include <stdio.h>
int main()
{
    // sum of the digits of a num
    // rev of digits of a num 656 -----> 656

    // int sum=0;
    // int rem ;
    // int n = 656;
    // while(n>0)
    // {
    //     rem = n% 10;
    //     n= n / 10;
    //     sum = sum + rem;
    // }
    // printf("Sum of digits is: %d",sum);
    // return 0;

    //---------------------------
    // Reverse

    // int rev=0,n=-89;
    // while(n!=0)
    // {
    //     rev = rev * 10 + (n%10);
    //     n=n/10;
    // }
    // printf("Reverse num is: %d",rev);

    //----table of given num-----
    // 8*1=8
    // int num=8;

    // for(int i=1;i<=10;i++)
    // {
    //     printf("%d * %d = %d\n",num,i,num*i);
    // }
    // return 0;

    // PRIME NUMBER = 5
    //----divisible by 1 and itself [1,5]{5 is divisible by 1 & 5}
    // not divisible buy range {2,3,4}
    //  int n=7;
    //  int count=0;
    //  int flag=1;
    //  for(int i=2;i*i<=n;i++)
    //  {
    //      if(n%i==0)
    //      flag=0;
    //      break;
    //  }
    //  if(flag)
    //  {
    //      printf("It is prime");
    //  }
    //  else
    //  {
    //      printf("Not prime");
    //  }
    //  return 0;

    // [1-7] [1 4 9 16 25 36 49]
    //[3-8] [9 16 25 36 49 64]
    // int lowlimit;
    // printf("Enter the lowlimit:");
    // scanf("%d",&lowlimit);
    // int upperlimit;
    // printf("Enter the upperlimit:");
    // scanf("%d",&upperlimit);
    // int square;
    // for(int i=lowlimit;i<=upperlimit;i++)
    // {
    //     square = i * i ;
    //     printf("Square is : %d\n",square);
    // }
    // return 0;

    // 1 2 3 5 8 13 ....

    // int t=9,i;
    // int t1=0,t2=1,t3;
    // if(t==1)
    // printf("0");
    // else if(t==2)
    // {
    //     printf("0   1");
    // }
    // else{
    //     for(i=3;i<=t;i++)
    //     {
    //         t3=t1 + t2;
    //         printf("%d \t",t3);
    //         t1=t2;
    //         t2=t3;
    //     }
    // }

    // for(int i=1;i<=4;i++)
    // {
    //     for(int j=1;j<=i;j++)
    //     {
    //         printf("%d " , j);
    //     }
    //     printf("\n");
    // }

    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    //* # * #
    //* # * #
    //* # * #
    //* # * #

    // int num1=0;
    // int num2=1;
    // for(int i=3;i<=10;i++)
    // {
    //     int num3 = num1 + num2;
    //     num1 = num2;
    //     num2 = num3;
    //     printf("FB Series:%d\n",num3);
    // }

    // return 0;   
    
    // int lwlmt = 2, i, n;
    // int uplmt = 50;
    // for (n = lwlmt; n <= uplmt; n++)
    // {
    //     int flag = 1;

    //     for (int i = 2; i < n; i++)
    //     {

    //         if (n % i == 0)
    //         {
    //             flag = 0; // not prime
    //             break;
    //         }
    //     }
    //     if (flag)
    //         printf("%d is a prime number\n", n);
    // }
    int n=2;
    int cnt=0;
    int i;
    while(cnt<4)
    {
        int flag=1;
        for(i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                flag=0;
                break;
            }
        }
        if(flag)
        {
            printf("\n %d is a prime num",n);
            cnt++;
        }
        n++;    
    }
}