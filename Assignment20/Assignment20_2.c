// Write a function to swap strings of two char arrays of calling functions.

#include<stdio.h>
#include<string.h>

void Swap_string(char *ptr1, char *ptr2)
{
    char *temp = ptr1 ;
    ptr1 = ptr2;
    ptr2 = temp;
 
}

int main()
{
    char *str1 = "abcd";
    char *str2 = "xyz";


    Swap_string(str1,str2);
    printf("After swapping string\n");
    printf("str1 = %s\nstr2 = %s",str1,str2);
}