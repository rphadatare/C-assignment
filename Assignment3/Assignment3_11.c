/*
Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.
*/

#include<stdio.h>

int main()
{
    int Subj1,Subj2,Subj3,Subj4,Subj5;
    int Total_Marks = 0,Avarage_Marks = 0;

    printf("Enter marks of subject\n");
    scanf("%d%d%d%d%d",&Subj1,&Subj2,&Subj3,&Subj4,&Subj5);

    Total_Marks = (Subj1 + Subj2 + Subj3 + Subj4 + Subj5)/5;

    if(Total_Marks>=33)
    {
          printf("Canditate is Passed\n");
    }
    else
    {
        printf("Canditate is Failed\n");
    }

    return 0;
}