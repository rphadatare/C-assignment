// Write a function to check whether a given string is palindrome or not.


#include<stdio.h>
#include<string.h>

char Pallindrome(char Brr[])
{
    int i = 0, flag = 1, Len = 0, j = 0; 
    char Temp[100];

    for(i = 0 ; Brr[i] != '\0' ; i++)
    {
        Len++;
    }
    Len = Len - 1;
    printf("Length of string = %d\n",Len);

    for(i = 0 ;i < Len ; i++)
    {
        if(Brr[i] != Brr[Len-i-1])
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
    char Arr[50];
    int Ret = 1;
    printf("Enter 1st string\n");
    fgets(Arr,50,stdin);

    Ret = Pallindrome(Arr);
    if(Ret == 1)
    {
        printf("String is Not Palindrome\n");
    }
    else
    {
        printf("String is Palindrome\n");
    }
    
    return 0;
}