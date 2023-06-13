//Write a function to compare two strings.

#include<stdio.h>
#include<string.h>

char Compare_String(char Crr[],char Drr[])
{
    int i = 0 , flag = 1; 

    for(i = 0; Crr[i]!='\0' && Drr[i]!='\0'; i++)
    {
        if(Crr[i]!=Drr[i])
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
    char Brr[50];
    int Ret = 0;
    
    printf("Enter 1st string\n");
    fgets(Arr,50,stdin);

    printf("Enter 2nd string\n");
    fgets(Brr,50,stdin);

    Ret = Compare_String(Arr,Brr);
    if(Ret == 1)
    {
        printf("String are not same\n");
    }
    else
    {
        printf("String are same\n");
    }
    
    return 0;
}