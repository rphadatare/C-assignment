//Write a function to calculate length of the string.

#include<stdio.h>
#include<string.h>

int String_Length(char Brr[])
{
    int iCnt = 0,i = 0;

    for(i = 0 ; Brr[i] != '\0' ; i++)
    {
        iCnt++;
    }

    return iCnt;
}

int main()
{
    char Arr[50];
    int iLen = 0;
    
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);

    iLen = String_Length(Arr);
    printf("Length of string = %d",iLen);

    return 0;
}