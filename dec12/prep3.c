#include <stdio.h>
#include <string.h>
void convertString(char *str);
int getValue(char ch);

int getValue(char ch)
{
    char index1[5] = "AEIOU";
    char index2[5] = "aeiou";
    for(int i = 0; i < 5; i++)
    {
        if (index1[i] == ch || index2[i] == ch)
        {
            return i + 1;
        }
    }
    return -1;
}

void convertString(char *str)
{
    int n = strlen(str);
    for (int i = 0; i < n; i++)
    {
        int val = getValue(str[i]);
        if(val!=-1)
        {
            printf("%d",val);
        }
        else if(str[i] == 'z')
        {
            printf("%c",'a');
        }
        else if(str[i] == 'Z')
        {
            printf("%c",'A');
        }
        else{
            printf("%c",str[i] + 1);
        }
    }
}

int main()
{
    char ch[20];
    printf("Enter the input:\n");
    scanf("%s", ch);
    convertString(ch);
    return 0;
}