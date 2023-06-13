// Write a function to check whether a given string is an alphanumeric string or not.
// (Alphanumeric string must contain at least one alphabet and one digit)

#include<stdio.h>
#include<string.h>

int AlphaNumeric(char Brr[])
{
    int i = 0 , flag = 1,Len = 0; 

   
    for(i = 0 ; Brr[i] != '\0' ; i++)
    {
        if( (Brr[i] >= 'a' && Brr[i] <= 'z') || 
            (Brr[i] >= 'A' && Brr[i] <= 'Z') ||
            (Brr[i] >= '0' && Brr[i] <= '9'))
        {
            flag = 1;
        }
        else
        {
            flag = 0;
            break;
        }
    }    
    return flag;
}

int main()
{
    char Arr[50];
    int Ret = 1;
    
    printf("Enter 1st string\n");
    scanf("%[^'\n']s",Arr);

    Ret = AlphaNumeric(Arr);
    if(Ret == 1)
    {
        printf("String is alphanumeric\n");
    }
    else
    {
        printf("String is not alphanumeric\n");
    }
    
    return 0;
}