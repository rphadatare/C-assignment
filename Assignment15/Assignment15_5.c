// Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.


#include<stdio.h>

int Fist_Occurance(int Brr[],int size)
{
    int i = 0, j = 0;

    for(i = 0 ; i < size ; i++)
    {
        for(j = i+1 ; j < size ; j++)
        {
            if(Brr[i] == Brr[j])
            {
                return Brr[i];
            }
        }
    }
    return -1;
}

int main()
{
    int Arr[100];
    int Size = 0,iValue = 0, Ret = 0;
    int i = 0;

    printf("Enter size of array\n");
    scanf("%d",&Size);

    printf("Enter values in array\n");
    for(i = 0 ; i<Size ; i++)
    {
        scanf("%d",&Arr[i]);
    }

    Ret = Fist_Occurance(Arr,Size);
    if(Ret == -1)
    {
        printf("Duplicate Number is not occur\n");
    }
    else
    {
        printf("%d is Duplicate Number\n",Ret);
    }
    return 0;
}

