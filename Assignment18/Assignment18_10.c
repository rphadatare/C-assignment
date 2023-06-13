// Write a function to find the repeated character in a given string.

#include<stdio.h>
#include<string.h>

void Repeat(char Brr[])
{
    int i = 0, j = 0, Len = 0;
    int count = 0;
    int Hash[128] = {0};
    
    for(i = 0 ; Brr[i] != '\0' ; i++)
    {
        Len++;
    }
    Len = Len - 1;
    printf("Length of string = %d\n",Len);

   
    for(i = 0; Brr[i] != '\0' ; i++)
    {
        Hash[Brr[i]]++;
    }
    
    

    printf("Duplicate number in array\n");
    for(i = 0; i < 128 ; i++)
    {
       if(Hash[i] >= 2)
       {
            printf("%c  ==>  %d\n",i,Hash[i]);
       }
    }
}

int main()
{
    char Arr[50];
    int Ret = 1;
    printf("Enter 1st string\n");
    fgets(Arr,50,stdin);

    Repeat(Arr);
    
    return 0;
}
