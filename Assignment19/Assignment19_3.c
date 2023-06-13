// Write a program to read and display a 2D array of strings in C language.

#include<stdio.h>
#include<string.h>

void Display(char name[5][50])
{
    int i = 0 , j = 0;

    printf("Display a 2D array of strings\n");
    for(i = 0 ; i < 5 ; i++)
    {
        printf("%s\n",name[i]);
    }

}

int main()
{
    char str[5][50];
    int i = 0 , j = 0;

    printf("Enter string\n");
    for(i = 0 ; i < 5 ; i++)
    {
        printf("Enter %d name\n",i+1);
        gets(str[i]);
    }

    Display(str);

    return 0;
}