/*
Write a program to calculate HCF of two numbers.
*/

#include<stdio.h>

int main()
{
    int iNo1, iNo2, i, HCF;

    printf("Enter two numbers:\n");
    scanf("%d %d", &iNo1, &iNo2);

    for (i = 1; i <= iNo1 && i <= iNo2; i++) 
    {
        
        if (iNo1 % i == 0 && iNo2 % i == 0)
        {
            HCF = i;
        }
    }

    printf("The HCF of two numbers %d and %d is \n%d.", iNo1, iNo2, HCF);

    return 0;
}