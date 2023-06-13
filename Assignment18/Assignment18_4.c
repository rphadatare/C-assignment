// Write a function to transform string into uppercase


#include<stdio.h>
#include<string.h>

char Uppercase(char Brr[])
{
    int i = 0 ; 

   while(Brr[i]!= '\0')
   {
        if(Brr[i]>='a' && Brr[i]<='z')
        {
            Brr[i] = Brr[i] - 32;
        }
        i++;
   }

   printf("Print string  in Uppercase\n%s",Brr);

}

int main()
{
    char Arr[50];
    
    printf("Enter 1st string\n");
    fgets(Arr,50,stdin);

    Uppercase(Arr);
    
    return 0;
}