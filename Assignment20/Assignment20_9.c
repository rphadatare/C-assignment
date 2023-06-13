// Write a program to print the elements of an array in reverse order.

#include<stdio.h>
#include<string.h>

void Reverse(int *ptr,int Size)
{
    int i = 0 ,j = 0, temp = 0;
   
    for(i=0,j=Size-1;i<j;i++,j--)
	
	{
		temp = *(ptr+i);
		*(ptr+i) = *(ptr+j);
		*(ptr+j) = temp;
	}

	printf("After reversing the array:\n");
	for(i=0;i<Size;i++)
	{
		printf("%d\t",*(ptr+i));
	}

   
}

int main()
{
    int Arr[10];
    int size = 10;

    printf("Enter values in array\n");
    for(int i = 0; i <  size ; i++)
    {
        scanf("%d",&Arr[i]);
    }
    
    Reverse(Arr,size);

    return 0;
}