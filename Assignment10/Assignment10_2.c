/* Write a function to calculate simple interest. (TSRS)*/

#include<stdio.h>

float Simple_Interest(int p,float r,int t)
{
    float S_I = 0.00;

    S_I = (p * r * t) / 100;

    return S_I;
}

int main()
{
    int P = 0;
    float R = 0.00;
    int T = 0;
    float Total_Amount = 0.00;

    printf("Enter principle amount\n");
    scanf("%d",&P);

    printf("Enter interest rate amount\n");
    scanf("%f",&R);

    printf("Enter year\n");
    scanf("%d",&T);

    Total_Amount = Simple_Interest(P,R,T);

    printf("Total interest payment amount \nRs. %0.2f",Total_Amount);

    return 0;
}