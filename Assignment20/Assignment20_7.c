// Write a program to count the number of vowels and consonants in a string using a pointer.

#include<stdio.h>

void String(char *ptr)
{
    int i = 0,v_count = 0,c_count = 0;

    for(i = 0; ptr[i]!='\0';i++)
    {
        if(ptr[i]=='a'||ptr[i]=='e'||ptr[i]=='i'||ptr[i]=='o'||ptr[i]=='u')
        {
            v_count++;
        }
        else
        {
            c_count++;
        }
    }

    printf("Vowels = %d\nConsonants = %d",v_count,c_count);

    
}
int main()
{
    char str[20];

    printf("Enter string\n");
    gets(str);

    String(str);

    return 0;
}