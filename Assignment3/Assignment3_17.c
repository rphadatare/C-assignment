/*
Write a program which takes the length of the sides of a triangle as an input. Display
whether the triangle is valid or not.
*/

#include<stdio.h>

int main()
{
    int Side1 = 0;
    int Side2 = 0;
    int Side3 = 0;

    printf("Enter lengths of triangle\n");
    scanf("%d %d %d",&Side1,&Side2,&Side3);

    if((Side1 != Side2)&&(Side2 != Side3)&&(Side1 != Side3))
    {
        printf("It is Scalene Triangle\n");
    }

    else if((Side1 == Side2)&&(Side2 == Side3)&&(Side1 == Side3))
    {
        printf("It is Equilateral Triangle\n");
    }
    
    else if((Side1 == Side2)||(Side2 == Side3)||(Side1 == Side3))
    {
        printf("It is Isoscales Triangle\n");
    }
}