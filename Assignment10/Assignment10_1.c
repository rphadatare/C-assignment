/* Write a function to calculate the area of a circle. (TSRS) */

#include<stdio.h>
#define PI 3.14

float Area_Of_Circle(float r , float pi)
{
    float Area = 0.00;

    Area = pi * r * r;

    return Area;
}

int main()
{
    float radius = 0.0;
    float area = 0.00;

    printf("Radius of circle\n");
    scanf("%f",&radius);

    area = Area_Of_Circle(radius,PI);

    printf("Area of circle is %.2f",area);

    return 0;
}