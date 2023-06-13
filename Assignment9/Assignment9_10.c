/*
C program to find all roots of a quadratic equation using switch case
*/
#include<stdio.h>

int main()
{
    double a,b,c,discriminant;
    printf("Enter values\n");
    scanf("%lf %lf %lf",&a,&b,&c);

    
   discriminant = (b * b)-(4 * a * c);

   switch(discriminant==0)
   {
        case 1:
        printf("Root is real and equal\n");
        break;

        switch(discriminant>0)
        {
          case 1:
               printf("Root is real and distinct\n");
               break;
          case 0:
               printf("Root is imaginary\n");
               break;
        }
   }
   return 0;
}