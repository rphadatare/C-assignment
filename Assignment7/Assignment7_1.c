/*
Write a program to find the Nth term of the Fibonnaci series.
*/

#include<stdio.h>

int main()
{
    int iNo = 0,a = 1 ,b = 1, c = 0, i = 3;

    printf("Enter number\n");
    scanf("%d",&iNo);

    if((iNo==1)||(iNo==2))
    {
        printf("%d",a);
    }
    else
    {
        for(i =3;i<=iNo; i++)
        {
            c = a+b;
            a = b;
            b = c;
        }
        printf("%dth term of the Fibonnaci series \n%d",iNo,b);
    }
}