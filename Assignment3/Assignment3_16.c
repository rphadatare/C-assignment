/*
Write a program to check whether a given character is an alphabet (uppercase), an
alphabet (lower case), a digit or a special character.
*/

#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter character\n");
    scanf("%c",&ch);

    if(ch>= 65 && ch<= 90)
    {
        printf("Alphabet is in Uppercase");
    }
    else if(ch>= 97 && ch<= 122)
    {
        printf("Alphabet is in Lowercase");
    }
    else if(ch>= 48 && ch<= 57)
    {
        printf("It is Digit");
    }
    else if((ch >= 32 && ch <= 47)||(ch >= 58 && ch <= 64)||(ch >= 91 && ch<= 96)||(ch >=123 && ch<=126))
    {
        printf("It is Special character");
    }
    
    return 0;
}