/*
Write a menu driven program with the following options:
a. Addition
b. Subtraction
c. Multiplication
d. Division
e. Exit
*/

#include<stdio.h>

int main()
{
    int iNo1 = 0,iNo2 = 0,Result = 0;
    char Choice;

    printf("A. Addition\n");
    printf("B. Substraction\n");
    printf("C. Multiplication\n");
    printf("D. Divison\n");
    printf("E. Exit\n");

    printf("Enter your choice\n");
    scanf("%c",&Choice);
    fflush(stdin);

    switch (Choice)
    {
        case 'A':
                printf("Enter two number\n");
                scanf("%d %d",&iNo1,&iNo2);
                Result = iNo1 + iNo2;
                printf("Addition is \n%d",Result);
                break;

        case 'B':
                printf("Enter two number\n");
                scanf("%d %d",&iNo1,&iNo2);
                Result = iNo1 - iNo2;
                printf("Substraction is \n%d",Result);
                break;
    
        case 'C':
                printf("Enter two number\n");
                scanf("%d %d",&iNo1,&iNo2);
                Result = iNo1 * iNo2;
                printf("Multiplication is \n%d",Result);
                break;
        
        case 'D':
                printf("Enter two number\n");
                scanf("%d %d",&iNo1,&iNo2);
                Result = iNo1 / iNo2;
                printf("Divison is \n%d",Result);
                break;
        
        case 'E':
                return 0;
                break;

        return 0;
    }   
}