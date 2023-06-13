//Write a program to swap values of two int variables

#include<stdio.h>

int Swap(int no1,int no2)
{
    int Temp = no1;
    no1 = no2;
    no2 = Temp;
    printf("Swap numbers \niNo1 = %d\niNo2 = %d",no1,no2);

}
int main()
{
    int iNo1=0,iNo2=0;

    printf("Enter the numbers\n");
    scanf("%d%d",&iNo1,&iNo2);

    Swap(iNo1,iNo2);

    return 0;
}