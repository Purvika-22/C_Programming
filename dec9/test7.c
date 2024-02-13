#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void revstring(char *str);
int main()
{

    char str[10] = "kpit"; // str is  a const pointer to non const string
    // int i = 0;
    // while (str[i] != '\0')
    //     i++;
    // printf("\nLength = %d", i);
    revstring(str);
    return 0;
}
void revstring(char *str)
{
    int length = strlen(str);
    printf("len : %d\n", length);
    for (int i = 0; i < length / 2; i++)
    {
        int temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }

    printf("Reverse string is : %s", str);
}

//     char str[10]="kpit";// str is a conatant pointer to non constant string
//    // str = "kpit";//str is a pointer you have to give the address
//     //*str='k'; // it will take single char k
//     //str++ no bcoz str is const
//     strcpy(str,"kpit");

//     char *s = "pune"; // the string that is stored via pointer is constant
//     ///--- this is exceptional case in C where you have some fixed string
//     //s++; //is allowed bcoz s is just a pointer
//     //s[0]='K'; //run time error

//     char *d; //this pointer has no memory we can't do like this
//     printf("Enter the string");//coz pointer is only used to store the address
//     // you can use this with the help of malloc
//     gets(d); //kpit
//     printf("%s \n",d);

// char *d = malloc(10 * sizeof(char)); // d is a non cnst pointer to non const string
// printf("Enter the string:");
// gets(d); // kpit
// printf("%s \n", d);
// strcpy(d, "aaaa");
// printf("%s \n", d);

// char str[10];
// printf("Enter the string:");
// gets(str);//kpit
// printf("%s \n",str);
