/*
Write a program to print first N terms of Fibonacci series
*/

#include<stdio.h>

int main()
{
    int iNo = 0,a = 1 ,b = 1, c = 0, i = 3;

    printf("Enter number\n");
    scanf("%d",&iNo);

   for(i=1;i<=iNo;i++)
   {
        if(i<=2)
        {
            printf("%d\t",a);
            continue;
        }
        else
        {
            for(i=3;i<=iNo;i++)
            {
                c = a + b;
                a = b;
                b = c;
                printf("%d\t",b);
            } 
        } 
   }
   return 0;
}