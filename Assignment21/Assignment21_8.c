// Write a program to store information of 10 students and display them using structure.

#include<stdio.h>


struct Student
{
    int Roll_no;
    char Name[20];
    int Class;
};

int main()
{
    struct Student s[10];
    int i = 0;

    for(i = 0 ; i < 10 ; i++)
    {
        printf("%d student detail\n",i+1);

        printf("Enter roll no \n");
        scanf("%d",&s[i].Roll_no);

        printf("Enter name\n");
        scanf("%s",&s[i].Name);
        
        printf("Enter class\n");
        scanf("%d",&s[i].Class);
    }

    for(i = 0 ; i < 10 ; i++)
    {
        printf("------------------------------------");
        printf("Roll No : %d\n",s[i].Roll_no);
        printf("Name    : %s\n",s[i].Name);
        printf("Class   : %d\n",s[i].Class);
        printf("------------------------------------");
    }

}