// Write a program that asks the user to enter a username. If the username entered is
// one of the names in the list then the user is allowed to calculate the factorial of a
// number. Otherwise, an error message is displayed

#include<stdio.h>
#include<string.h>

int  Factorial(int iNo);
        
int Check_Username(char Str[5][20],char W1[20])
{
    int i = 0; 

    for(i = 0 ; i < 5 ; i++)
    {
        if(strcmp(Str[i],W1)==0)
        {
            Factorial(i+1);
        }
    }
}

int Factorial(int iNo)
{
    int i = 1 , Mult = 1;

    for(i = 1 ; i <= iNo ; i++)
    {
        Mult = Mult * i;
    }

    return Mult;
}

int main()
{
    char str[5][20];
    int i = 0,Ret = 0;
    char word1[20],word2[20];

    printf("Enter words\n");
    for(i = 0; i < 5 ; i++)
    {
        gets(str[i]);
    }

    printf("Enter words to check distance\n");
    gets(word1);

    Ret = Check_Username(str,word1);
    if(Ret == -1)
    {
        printf("Error : Usernae not present\n");
    }
    else
    {
        printf("factorial of username number = %d",Ret);
    }
    return 0;
}