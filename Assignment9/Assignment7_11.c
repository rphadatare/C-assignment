/*
11. Write a program to find the position of first 1 in LSB.
*/

#include<stdio.h>

int main()
{
    int iNo = 0,count = 0;

    printf("Enter Number\n");
    scanf("%d",&iNo);

    while(iNo!=0)
    {
        count++;
        if(iNo & 1 == 1)
        {
            break;
        }
        else
        {
            iNo = iNo>>1;
        }
    }
    printf("First 1 from LSB is at %d\n",count);
    
    return 0;
}