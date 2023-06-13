/*
Write a program to print cubes of the first N natural numbers
*/

#include<stdio.h>

int main()
{
    int iNo = 0;
    int i,CubeRoot=1;

    printf("Enter the number\n");
    scanf("%d",&iNo);

    printf("Cube of the first 10 natural numbers\n");
    for(i=1;i<=iNo;i++)
    {
        CubeRoot = i * i * i;
        printf("%d\t",CubeRoot);
    }
    
    return 0;
}
