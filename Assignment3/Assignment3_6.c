//Write a program to print greater between two numbers. Print one number if both are the same.

#include<stdio.h>

int main()
{
    int iNo1 = 0,iNo2 = 0;

    printf("Enter Numbers\n");
    scanf("%d %d",&iNo1,&iNo2);

    if(iNo1 == iNo2)
    {
        printf("Both numbers are same\n");
    }
    else
    {
        if(iNo1 > iNo2)
        {
            printf("Number 1 is greater");
        }
        else
        {
            printf("Number 2 is greater");
        }
    }
    
    return 0;
}