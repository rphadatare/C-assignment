/*
Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.
*/

#include<stdio.h>

int main()
{
    float Cost_Price = 0;
    float Sell_Price = 0;
    float Profit = 0;
    float Loss = 0;
    float Profit_Percentage = 0;
    float Loss_Percentage = 0;

    printf("Enter Costing price\n");
    scanf("%f",&Cost_Price);

    printf("Enter Selling price\n");
    scanf("%f",&Sell_Price);

    if(Cost_Price < Sell_Price)
    {
        Profit = Sell_Price - Cost_Price;
        printf("Profit = %0.2f\n",Profit);

        Profit_Percentage = (Profit/Cost_Price)*100;
        printf("Profit Percentage = %0.2f\n",Profit_Percentage);
    }
    else
    {
        Loss = Cost_Price - Sell_Price;
        printf("Loss = %0.2f\n",Loss);

        Loss_Percentage = (Loss/Cost_Price)*100;
        printf("Loss Percentage  = %0.2f\n",Loss_Percentage);
    }
    return 0;
}
