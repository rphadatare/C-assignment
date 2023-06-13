// Write a program to store information of n students and display them using structure

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
    int i = 0,n = 0;

    printf("Enter length\n");
    scanf("%d",&n);

    for(i = 0 ; i < n ; i++)
    {
        printf("%d student detail\n",i+1);

        printf("\nEnter roll no \n");
        scanf("%d",&s[i].Roll_no);

        printf("Enter name\n");
        scanf("%s",&s[i].Name);
        
        printf("Enter class\n");
        scanf("%d",&s[i].Class);
    }

    for(i = 0 ; i < n ; i++)
    {
        printf("------------------------------------");
        printf("Roll No : %d\n",s[i].Roll_no);
        printf("Name    : %s\n",s[i].Name);
        printf("Class   : %d\n",s[i].Class);
        printf("------------------------------------");
    }

}