//Write a program to print “iNeuron” on the screen. (Remember to print in double quotes)

#include<stdio.h>
#define PI 3.14;

int main()
{
    float R = 0;
    float A = 0;

    printf("Enter radius of circle\n");
    scanf("%f",&R);

    A = 3.14 * R * R;

    printf("Area of circle is = %f",A);

    return 0;

}