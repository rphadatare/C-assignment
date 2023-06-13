 /*Write a function to print first N terms of Fibonacci series (TSRN)*/

#include<stdio.h>

 void Print_Fibonacci(int iNo)
 {
    int a = 1,b = 1,c = 0,i = 1;

    for(i = 1; i<=iNo;i++)
    {
        if(i<=2)
        {
            printf("%d\t",a);
            continue;
        }
        else 
        {
            for(i = 3;i<=iNo;i++)
            {
                c = a + b;
                a = b;
                b = c;
                printf("%d\t",b);
            }
        }
    }
 }

 int main()
 {
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d",&iValue);

    Print_Fibonacci(iValue);

    return 0;
 }