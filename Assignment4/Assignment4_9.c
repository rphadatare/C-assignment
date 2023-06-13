/*
Write a program to print cubes of the first 10 natural numbers
*/

#include<stdio.h>

int main()
{
    int iNo = 10;
    int i,CubeRoot=1;

    printf("Cube of the first 10 natural numbers\n");
    for(i=1;i<=10;i++)
    {
        CubeRoot = i * i * i;
        printf("%d\t",CubeRoot);
    }
    
    return 0;
}
