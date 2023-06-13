/*
Write a program to check whether a given number is there in the Fibonacci series or not.
*/

#include<stdio.h>

int main()
{
    int iNo = 0,a = 0 ,b = 1, c = 0;

    printf("Enter number\n");
    scanf("%d",&iNo);

         
        while (c < iNo)
        {
            c = a + b;
             
            a = b;
             
            b = c;
        }
         
        if(c == iNo)
        {
            printf("Number is in Fibonacci series");
        }
        else
        {
            printf("Number not in Fibonacci series");
        }
}