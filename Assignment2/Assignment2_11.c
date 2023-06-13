/*
Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
and convert it into USD.
*/

#include<stdio.h>

int main()
{
    float USD = 76.23;
    float INR = 0;

    printf("Enter Rupees\n");
    scanf("%f",&INR);

    USD = INR / USD;

    printf("INR conver into USD\n$%0.2f",USD);

    return 0;
}