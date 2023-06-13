// Write a function to reverse a string.

#include<stdio.h>
#include<string.h>

char Reverse_String(char Brr[])
{
    int iCnt = 0,i = 0;

    for(i = 0 ; Brr[i] != '\0' ; i++)
    {
        iCnt++;
    }
    printf("Length of string = %d\n",iCnt);

    for(i = iCnt-1; i>=0 ; i--)
    {
        printf("%c",Brr[i]);
    }
    
}

int main()
{
    char Arr[50];
    char Rev[50];
    
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    Reverse_String(Arr);
    
    return 0;
}