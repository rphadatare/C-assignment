// Write a program to print a string in reverse using a pointer

#include<stdio.h>
#include<string.h>

void Reverse(char *ptr)
{
    int i = 0 ,j = 0, len = 0,temp = 0;

    len = strlen(ptr);
    printf("String length = %d\n",len);   

   
    for(i=0,j=len-1;i<j;i++,j--)
	{
		temp = *(ptr+i);
		*(ptr+i) = *(ptr+j);
		*(ptr+j) = temp;
	}

   
    printf("%s",ptr);
    
}

int main()
{
    char str[20];


    printf("Enter string\n");
    gets(str);
    
    
    Reverse(str);

    return 0;
}