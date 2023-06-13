//Write a program to check whether roots of a given quadratic equation are real &
//distinct, real & equal or imaginary roots

#include<stdio.h>

int main()
{
    double a,b,c,discriminant;
    printf("Enter values\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    
   discriminant = (b * b)-(4 * a * c);

   if(discriminant == 0)
   {
    printf("Root is real and equal");
   }
   else if(discriminant > 0)
   {
    printf("Root is real and distinct");
   }
   else if(discriminant < 0)
   {
    printf("Root is imaginary");
   }



}