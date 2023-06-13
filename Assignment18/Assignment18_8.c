// Write a function to count words in a given string

#include<stdio.h>
#include<string.h>

char Count_Words(char Brr[])
{
    int i = 0, count = 0; 

    for(i = 0 ; Brr[i] != '\0' ; i++)
    {
        if(Brr[i] == ' ' || Brr[i] == '\n' || Brr[i] == '\t')
        {
            count++;
        }
    }

    printf("Total words in string = %d",count);
}

int main()
{
    char Arr[50];
    int Ret = 1;
    printf("Enter 1st string\n");
    fgets(Arr,50,stdin);

    Count_Words(Arr);

    return 0;
}