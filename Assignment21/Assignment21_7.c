// Write a program to calculate the difference between two time periods.

#include<stdio.h>


struct Time
{
    int Hour;
    int Min;
};

void Time_Difference(struct Time *p,struct Time *q)
{
    struct Time t3;
    int S1 = 0,S2 = 0,TotalSec = 0;

    S1 = p->Hour * 60 * 60 + p->Min * 60;
    S2 = q->Hour * 60 * 60 + q->Min * 60;

    TotalSec = S1 - S2;

    t3.Min = TotalSec / 60;
    t3.Hour = (t3.Min /60);
    t3.Min = t3.Min % 60;

    printf("Time difference is: %02u:%02u\n", t3.Hour, t3.Min);
   
}

int main()
{
    struct Time t1,t2;

    printf("Enter 1st time\n");
    scanf("%d %d",&t1.Hour,&t1.Min);

    printf("Enter 2nd time\n");
    scanf(" %d %d",&t2.Hour,&t2.Min);

    printf("First Time\n");
    printf("Hours = %d :Min = %d\n",t1.Hour,t1.Min);

    printf("Second Time\n");
    printf("Hours = %d :Min = %d\n",t2.Hour,t2.Min);

    Time_Difference(&t1,&t2);

}