// If a five-digit number is input through the keyboard,
// write a program to reverse the number.
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the 5 digit number:\n");
//     scanf("%d", &n);
//     int rev = 0;
//     while (n > 0)
//     {
//         rev = rev * 10 + (n % 10);
//         n = n / 10;
//     }
//     printf("reverse number is:%d\n", rev);
//     return 0;
// }

// If lengths of three sides of a triangle are input through the keyboard,
// write a program to find the area of the triangle.

// #include <stdio.h>
// #include <math.h>
// int main()
// {
//     float a, b, c, sp, area;
//     printf("\nEnter sides of a triangle: ");
//     scanf("%f %f %f", &a, &b, &c);
//     sp = (a + b + c) / 2;
//     area = sqrt(sp * (sp - a) * (sp - b) * (sp - c));
//     printf("Area of triangle = %f\n", area);
//     return 0;
// }

// Consider a currency system in which there are notes of six
// denominations, namely, Re. 1, Rs. 2, Rs. 5, Rs. 10, Rs. 50, Rs. 100. If a
// sum of Rs. N is entered through the keyboard, write a program to
// compute the smallest number of notes that will combine to give Rs. N.

// #include <stdio.h>

// int main() {
//     int amount;
//     printf("Enter the amount in Rs.: ");
//     scanf("%d", &amount);

//     int notes[] = {100, 50, 10, 5, 2, 1};
//     int count, i;

//     printf("Smallest number of notes:\n");

//     for (i = 0; i < 6; i++) 
//     {
//         count = amount / notes[i];
//         if (count > 0) 
//         {
//             printf("%d notes of Rs. %d\n", count, notes[i]);
//             amount = amount % notes[i];
//         }
//     }

//     return 0;
// }

// arr[] = {}
// i/p = 7 , cosider 2 to 7 
// 2 + 3 - 1 + 4 - 1 + 5 - 1 + 6 - 1  + 7 - 1 = 22 //demand value = 5
// dv > return 0;
// dv < 2 to 7 , 3 to 7 , 4 to 7 until obtained value < demand value
// u have to return the increment count

// 2 to 7  3 to 7 4 to 7 count++
//how many times you incremented the count


// arr[] = {}
// i/p = 7 , cosider 2 to 7 
// 2 + 3 - 1 + 4 - 1 + 5 - 1 + 6 - 1  + 7 - 1 = 22 //demand value = 5
// dv > obtained value 
//return 0;
// dv < obtained value
//2 to 7 , 3 to 7 , 4 to 7 until obtained value < demand value
// u have to return the increment count


