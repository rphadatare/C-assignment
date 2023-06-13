//Write a program to check whether a given alphabet is in uppercase or lowercase.

#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter character\n");
    scanf("%c",&ch);

    if(ch>= 'A'&& ch<='Z')
    {
        printf("Alphabet is in Uppercase");
    }
    else if(ch>= 'a'&& ch<='z')
    {
        printf("Alphabet is in Lowercase");
    }

    return 0;
}