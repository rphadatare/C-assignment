// Write a program to calculate the length of the string using a pointer

#include<stdio.h>

void String_Length(char *ptr)
{
    int i = 0,len = 0;

    for(i = 0; ptr[i]!='\0';i++)
    {
        len++;
    }

    printf("String Length = %d",len);
}
int main()
{
    char str[20];

    printf("Enter string\n");
    gets(str);

    String_Length(str);

    return 0;
}