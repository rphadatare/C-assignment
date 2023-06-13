//Write a program to find the greatest among three given numbers. Print number once
//if the greatest number appears two or three times.

#include<stdio.h>

int main()
{
    int iNo1=0,iNo2=0,iNo3=0;

    printf("Enter numbers\n");
    scanf("%d %d %d",&iNo1,&iNo2,&iNo3);

    if((iNo1>iNo2)&&(iNo1>iNo3))
    {
        printf("%d is greatest number\n",iNo1);
    }
    else if((iNo2>iNo1)&&(iNo2>iNo3))
    {
        printf("%d is greatest number\n",iNo2);
    }
    else if((iNo3>iNo1)&&(iNo3>iNo2))
    {
        printf("%d is greatest number\n",iNo3);
    }
    else if((iNo1==iNo2)||(iNo2==iNo3)||(iNo1==iNo3))
    {
        printf("Greatest number is repeated\n");
    }

    return 0;
}