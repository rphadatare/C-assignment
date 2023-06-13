// Write a program to enter the marks of 5 students in Chemistry, Mathematics and
// Physics (each out of 100) using a structure named Marks having elements roll no.,
// name, chem_marks, maths_marks and phy_marks and then display the percentage
// of each student.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct Marks
{
    int roll_no;
    char name[30];
    int chem_marks;
    int maths_marks; 
    int phy_marks;
}m1[5];

void Input_Detail(struct Marks *ptr)
{
    int i = 0;
    

    for(i = 0; i < 5 ; i++)
    {
        printf("Enter %d student marks\n",i+1);

        printf("\nEnter roll no \n");
        scanf("%d",&ptr[i].roll_no);

        printf("Enter student name\n");
        scanf("%s",ptr[i].name);

        printf("Enter marks\n");
        scanf("%d %d %d",&ptr[i].chem_marks , &ptr[i].maths_marks , &ptr[i].phy_marks);
    }
}

void Display_Details(struct Marks *ptr)
{
    int i = 0;
    int Total_Marks = 0;
    float Percentage;

    printf("------------------------Student Details------------------------\n");
    for(i = 0 ; i < 5 ; i++)
    {
        Total_Marks = ptr[i].chem_marks + ptr[i].maths_marks + ptr[i].phy_marks;
        Percentage = (Total_Marks/3.00);

        printf("Student Roll no.    : %d\n",ptr[i].roll_no);
        printf("Student Name        : %s\n",ptr[i].name);
        printf("Chemistry Marks     : %d\n",ptr[i].chem_marks);
        printf("Mathematics Marks   : %d\n",ptr[i].maths_marks);
        printf("Physics Marks       : %d\n",ptr[i].phy_marks);
        printf("Percentage          : %0.2f\n",Percentage);
        printf("-----------------------------------------------------------\n");
    }
    
}

int main()
{
    struct Marks m1[5];
    int choice = 0;

    while(1)
    {
        printf("1. Enter student information\n");
        printf("2. Display student information\n");
        printf("3. Exit\n");

        printf("Enter your choice\n");
        scanf("%d",&choice);

        switch (choice)
        {
        case 1:
            Input_Detail(m1);
            break;
        
        case 2:
            Display_Details(m1);
            break;
        
        case 3:
            printf("Exit in program...\n");
            exit(0);
            break;

        default:
            printf("Invalid Input\n");
            break;
        }
    }
    return 0;
}