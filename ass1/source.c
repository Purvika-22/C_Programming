// #include <stdio.h>
// #include "header.h"

// // void checkpositive_negative(int num)
// // {
// //     if (num > 0)
// //     {
// //         int status = check(num);
// //         if (status == 1)
// //             printf("prime");
// //         else
// //             printf("not prime");
// //     }
// //     else
// //     {

// //         printf("\n Re-enter number");
// //         scanf("%d", &num);
// //         checkpositive_negative(num);
// //     }
// // }

// // void checkprime(int n)
// // {
// //     int i;
// //     int flag = 1;
// //     for (i = 2; i*i < n; i++)
// //     {
// //         if (n % i == 0)
// //         {
// //             flag = 0;
// //             break;
// //         }
// //     }
// //     if (flag)
// //     {
// //         printf("\n %d is a prime num", n);
// //     }
// //     else
// //     {
// //         printf("Not prime\n");
// //     }
// // }
// // int check(int n)
// // {
// //     int i;
// //     int flag = 1;
// //     for (i = 2; i < n; i++)
// //     {
// //         if (n % i == 0)
// //         {
// //             flag = 0;
// //             return flag;
// //         }
// //     }
// //     return flag;
// // }

// int isLeapyear(int yr)
// {
//     if ((yr % 4 == 0) || (yr % 100 != 0) && (yr % 400 == 0))
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// int isValidDate(int day, int month, int yr)
// {
//     if (yr < 1 || yr > 9999)
//     {
//         return 0; // this is invalid year
//     }

//     if (month < 1 || month > 12)
//     {
//         return 0; // invalid month
//     }

//     int daysInMonth[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//     if (month == 2 && isLeapyear(yr))
//     {
//         daysInMonth[2] = 29;
//     }

//     if (day < 1 || day > daysInMonth[month])
//     {
//         return 0; //invalid day
//     }

//     return 1;
// }

int isLeapyear(int year)
{
    if ((year % 4 == 0) || (year % 100 != 0) && (year % 400 == 0))
    {
        return 1;
    }
    return 0;
}
int isValidDate(int day, int month, int year)
{
    if (year < 1 && year > 9999)
    {
        return 0;
    }
    if (month < 1 || month > 12)
    {
        return 0;
    }

    int monthDays[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if(month == 2 && isLeapyear(year))
    {
        monthDays[2] = 29;
    }

    if(day < 1 || day > monthDays[month])
    {
        return 0;
    }

}



// #include <stdio.h>
// #include <string.h>

// void reverseString(char str[]) {
//     int length = strlen(str);
//     int start = 0;
//     int end = length - 1;

//     while (start < end) {
//         // Swap characters at start and end positions
//         char temp = str[start];
//         str[start] = str[end];
//         str[end] = temp;

//         // Move the pointers towards each other
//         start++;
//         end--;
//     }
// }

// int main() {
//     char inputString[100];

//     printf("Enter a string: ");
//     scanf("%s", inputString);

//     // Reverse the string
//     reverseString(inputString);

//     printf("Reversed string: %s\n", inputString);

//     return 0;
// }



// #include <stdio.h>
// #include <string.h>

// int countOccurrences(const char *str, const char *word) {
//     int count = 0;
//     int wordLength = strlen(word);

//     // Find the first occurrence of the word in the string
//     char *ptr = strstr(str, word);

//     while (ptr != NULL) {
//         // Increment count when the word is found
//         count++;

//         // Move the pointer to the next occurrence of the word
//         ptr = strstr(ptr + wordLength, word);
//     }

//     return count;
// }

// int main() {
//     char inputString[100];
//     char wordToFind[20];

//     printf("Enter a string: ");
//     fgets(inputString, sizeof(inputString), stdin);

//     printf("Enter the word to find: ");
//     scanf("%s", wordToFind);

//     // Remove newline character from the inputString (if present)
//     inputString[strcspn(inputString, "\n")] = '\0';

//     // Convert both the input string and the word to lowercase for case-insensitive comparison
//     strlwr(inputString);
//     strlwr(wordToFind);

//     // Count occurrences and print the result
//     int occurrences = countOccurrences(inputString, wordToFind);
//     printf("Occurrences of '%s' in the string: %d\n", wordToFind, occurrences);

//     return 0;
// }

