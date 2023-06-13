// Write a program to sort 10 city names stored in two dimensional arrays, taken from
// the user.

#include<stdio.h>
#include<string.h>

void Sort(char name[10][50])
{
    int i = 0 , j = 0 , k = 0 ;
    char temp[50];

    for(i = 0 ; i < 10-1 ; i++)
    {
        for(j = i+1 ; j < 10 ; j++)
        {
            if(strcmp(name[i],name[j]) > 0)
            {
                strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
                strcpy(name[j],temp);
            }
        }
    }

    printf("The sorted order of names are:\n");
    for(i=0 ; i<10 ; i++)
    {
        printf("%s\n",name[i]);
    }
}

int main()
{
    char str[10][50];
    int i = 0 , j = 0;

    printf("Enter string\n");
    for(i = 0 ; i < 10 ; i++)
    {
        printf("Enter %d name\n",i+1);
        gets(str[i]);
    }

    Sort(str);

    return 0;
}