/*
Program to take the value from the user as input electricity unit charges and calculate total electricity bill according to the given condition . 
Using the switch statement. 
For the first 50 units Rs. 0.50/unit 
For the next 100 units Rs. 0.75/unit 
For the next 100 units Rs. 1.20/unit 
For units above 250 Rs. 1.50/unit 
An additional surcharge of 20% is added to the bill.
*/

#include<stdio.h>

int main()
{
    int Units = 0;
    float Charges,Surcharge,TotalBill;

    printf("Enter electricity units\n");
    scanf("%d",&Units);

    
    switch(Units<=50)
    {
        case 1:
        Charges = Units * 0.50;
        break;

        case 0:
        switch(Units<=150)
        {
            case 1:
            Charges = 25 + ((Units-50) * 0.75);
            break;

            case 0:
            switch(Units<=250)
            {
                case 1:
                Charges = 100 + ((Units-150) * 1.20);
                break;

                case 0:
                Charges = 220 + (Units-250) * 1.50;
                break;
            }
            break;
        }
        break;
    }
    Surcharge = Charges * 0.20;
    TotalBill = Charges + Surcharge;
    printf("Total Bill  = Rs %0.2f",TotalBill);
}