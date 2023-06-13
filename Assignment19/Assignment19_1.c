// Write a program to find the number of vowels in each of the 5 strings stored in two
// dimensional arrays, taken from the user.

#include<stdio.h>
#include<string.h>

void Find_Vowel(char name[5][50])
{
    int i = 0 , j = 0 , count = 0;

    for(i = 0 ; i < 5 ; i++)
    {
        count = 0;
        for(j = 0 ; name[i][j] != '\0' ; j++)
        {
           
            if(name[i][j] == 'a' || name[i][j] == 'e' || name[i][j] == 'i' || name[i][j] == 'o' || name[i][j] == 'u')
            {
                count++;
            }
        }
        printf("Vowels in %d string = %d\n",i+1,count);
    }

    

}

int main()
{
    char str[5][50];
    int i = 0 , j = 0;

    printf("Enter string\n");
    for(i = 0 ; i < 5 ; i++)
    {
        printf("Enter %d name\n",i+1);
        gets(str[i]);
    }

    Find_Vowel(str);

    return 0;
}