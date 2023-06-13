// Write a program to find the maximum number between two numbers using a pointer

#include<stdio.h>


void Find_Max(int n1,int n2)
{
    if(n1>n2)
    {
        printf("Maximum nunber is = %d",n1);
    }
    else
    {
        printf("Maximum nunber is = %d",n2);
    }
}
int main()
{
    int iNo1 = 0, iNo2 = 0;
    printf("Enter two numbers\n");
    scanf("%d %d",&iNo1,&iNo2);

    void (*Find_Max_ptr)(int,int) = &Find_Max;

    (*Find_Max_ptr)(iNo1,iNo2);

    return 0;
}