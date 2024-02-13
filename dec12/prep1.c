// // array tesukoni every element sq chesi max min find out
// // max - min = ?(x)
// // find out next prime to the x

// // convert num to binary
// // binary lo 1's place lo * print cheyalli
// // 0 place nothing

// #include <stdio.h>
// int main()
// {
//     int rem, n;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     if (n == 0)
//     {
//         printf("Enter the number greater than zero");
//     }
//     while(n>0)
//     {
//         rem = n % 2;
//         if(rem == 1)
//         printf("* ");
//         else if(rem==0)
//         {
//             n=n/2;
//             continue;
//         }
//         else{
//             printf("Correct number");     }
//         n= n/2;
//     }
//  }

#include <stdio.h>

int main() 
{
    int n;

    // Input from the user
    printf("Enter a decimal number: ");
    scanf("%d", &n);

    int binary[32];
    int i = 0;

    if (n == 0) 
    {
        // Special case for 0
        printf("Binary: 0\n");
        return 0;
    }

    while (n > 0)
    {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    for (int j = i - 1; j >= 0; j--) 
    {
        if (binary[j] == 1) 
        {
            printf("*");
        } 
        else 
        {
            printf("^"); // Two spaces for '0'
        }
    }

    return 0;
}
