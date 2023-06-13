// Write a function to reverse a string word wise. (For example if the given string is
// “iNeuron Education Services” then the resulting string should be “Services Education
// iNeuron”)

#include<stdio.h>
#include<string.h>

char Reverse(char Brr[])
{
    int i = 0, j = 0, Len = 0; 

    for(i = 0 ; Brr[i] != '\0' ; i++)
    {
        Len++;
    }
    Len = Len - 1;
    printf("Length of string = %d\n",Len);

    for(i = Len-1 ; i >= 0 ; i--)
    {
        if(Brr[i]==' ')
        {
            for(j = i ; j < Len-1 ; j++)
            {
                printf("%c",Brr[i]);
            }
        }
    }

}
int main()
{
    char Arr[50];
    int Ret = 1;
    printf("Enter 1st string\n");
    fgets(Arr,50,stdin);

    Reverse(Arr);
    
    
    return 0;
}