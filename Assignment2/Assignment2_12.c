/*
Write a program to take a three digit number from the user and rotate its digits by
one position towards the right.
*/

#include<stdio.h>

int main()
{
    int iNo = 0;
    

    printf("Enter three digit number\n");
    scanf("%d",&iNo);

    if(iNo<=99 || iNo>=1000)
    {
        printf("Invalid Input");
    }
    else
    {
            
        int iRotate = iNo % 10;

        int temp = iNo / 10;

        iNo = (iRotate*100) + temp;

        printf("Rotate Number is \n%d",iNo);
    }

    return 0;
}