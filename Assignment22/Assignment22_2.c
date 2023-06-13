// Write a program to ask the user to input a number of data values he would like to
// enter then create an array dynamically to accommodate the data values. Now take
// the input from the user and display the average of data values.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct Student
{
    int Roll_no;
    char Name[30];
};

int main ()
{
    struct Student *ptr;
    int size = 0, i = 0;

    printf("Enter size of array\n");
    scanf("%d",&size);

    ptr = (struct Student*)malloc(size * sizeof(struct Student));

    for(i = 0 ; i < size ; i++)
    {
        printf("Enter roll number\n");
        scanf("%d",&ptr[i].Roll_no);

        printf("Enter name\n");
        scanf("%s",&ptr[i].Name);
    }

    printf("-----------------Student Info-------------------\n");
    for(i = 0 ; i < size ; i++)
    {
        printf("%d)    Roll number  :%d\n",i+1,ptr[i].Roll_no);
        printf("      Name         :%s\n",ptr[i].Name);
        printf("\n");
    }

    free(ptr);

    return 0;
}
