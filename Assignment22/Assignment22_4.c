// Write a program to input and print text using dynamic memory allocation.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char *text;
    int size;

    printf("Enter size of text\n");
    scanf("%d",&size);

    text = (char*) malloc (size * sizeof(char));

    printf("Enter a text\n");
    fflush(stdin);
    gets(text);

    printf("Input string is: \n%s",text);
    
    free(text);
    
    return 0;

    
}