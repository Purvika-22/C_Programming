#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    // char *s = "kpit"; // valid string ==> pointer to const string u can't change any character
    // // string can't change but pointer can increment
    // // if u want to modify use array
    // char s1[] = "kpit";                                    
    char str[3][20] = {"pune", "maharastra", "rajasthan"}; 
    // 3 strings with 20 length
    // total size is 60 bytes hardly here we are using 
    // only 20 bytes but remain memory is wasted
    // to overcome this use DMA
    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%s\n", str[i]);
    // }
    // char *names[3] = {"pune", "maharastra", "rajasthan"}; // u can't change the data here
    // here 3 pointers pointing to 3 strings
    // strcpy(names[0],"kpit");//Segmenataion fault is always run time error

    // Array of pointers can be used if you have the fixed strings

    char **p = NULL;
    int n;
    printf("\n How many strings:"); // u dont have to ask for the columns from the user
    scanf("%d", &n);
    p = (char **)malloc(n * sizeof(char *));
    char temp[50]; // good practice to give the temporaray array
    for (int i = 0; i < n; i++)
    {
        getchar();//it is used to accept the enter key from the user
        printf("Enter the string:\n");
        scanf("%[^\n]s", temp); // it can't take multi worded string to avoid this use [^\n]
        // gets(temp);
        p[i] = (char *)malloc(strlen(temp) + 1 * sizeof(char));
        strcpy(p[i], temp);
    }
    printf("\nThe strings that you have entered is:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", p[i]);
    }
    return 0;
}
