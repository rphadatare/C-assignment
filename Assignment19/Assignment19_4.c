// Write a program to search a string in the list of strings.

#include<stdio.h>
#include<string.h>

int  Search(char name[5][50],char s[50])
{
    int i = 0 , flag = 1;

    
    for(i = 0 ; i < 3 ; i++)
    {
        if(strcmp(name[i],s)==0)
        {
            flag = 1;
            break;
        }
        else
        {
            flag = 0;
        }
    }

    return flag;
}

int main()
{
    char str1[5][50], str2[50];
    int i = 0 , j = 0, Ret = 0;

    printf("Enter string\n");
    for(i = 0 ; i < 3 ; i++)
    {
        printf("Enter %d name\n",i+1);
        gets(str1[i]);
    }

    printf("Enter string to search\n");
    gets(str2);

    Ret = Search(str1,str2);
    if(Ret == 1)
    {
        printf("String is found\n");
    }
    else
    {
        printf("String is not found\n");
    }

    return 0;
}