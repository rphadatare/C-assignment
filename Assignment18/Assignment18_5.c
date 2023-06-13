// Write a function to transform a string into lowercase

#include<stdio.h>
#include<string.h>

char Lowercase(char Brr[])
{
    int i = 0 ; 

   while(Brr[i]!= '\0')
   {
        if(Brr[i]>='A' && Brr[i]<='Z')
        {
            Brr[i] = Brr[i] + 32;
        }
        i++;
   }

   printf("Print string  in Lowercase\n%s",Brr);

}

int main()
{
    char Arr[50];
    
    printf("Enter 1st string\n");
    fgets(Arr,50,stdin);

    Lowercase(Arr);
    
    return 0;
}