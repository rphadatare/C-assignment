#include<stdio.h>


int main()
{
    int DD,MM,YYYY;

    printf("Enter date\n");
    scanf("%d/%d/%d",&DD,&MM,&YYYY);

    printf("\"Day = %d,Month = %d, Year = %d\"",DD,MM,YYYY);

    return 0;
}