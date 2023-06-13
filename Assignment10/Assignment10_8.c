/*
Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)
*/

#include<stdio.h>

int Permutation_Combination(int n,int r)
{
    int nFact = 1,m = 0,rFact = 1,mFact = 1;
    int i = 1;
    int Permutation;

    m = n - r;

    for(i = 1; i<=n ; i++)
    {
        nFact = nFact * i;
    }

    for(i = 1; i<=r ; i++)
    {
        rFact = rFact * i;
    }

    for(i = 1; i<=m ; i++)
    {
        mFact = mFact * i;
    }

    Permutation = nFact / mFact;
}

int main()
{
    int N = 0,R = 0;
    int iRet = 0;

    printf("Enter total number of objects in the set\n");
    scanf("%d",&N);

    printf("Enter umber of choosing objects from the set\n");
    scanf("%d",&R);

    iRet  = Permutation_Combination(N,R);

    printf("Permutation of %d and %d\n%d\n",N,R,iRet);

    return 0;
}