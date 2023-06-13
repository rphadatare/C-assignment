// From the list of IP addresses, check whether all ip addresses are valid.

#include<stdio.h>
#include<string.h>

int Check_IP(char Str[5][20])
{
    int i = 0, j = 0,count_no = 0,count = 0; 
    int hash1[5] , hash2[5];

    for(i = 0; i  < 5 ; i++)
    {
        count_no = 0;
        count = 0;

        for(j = 0 ; Str[i][j] != '\0' ; j++)
        {
            if(Str[i][j] >= '0' && Str[i][j] <= '9')
            {
                count_no++;
            }
            else
            {
                if(Str[i][j] == '.')
                {
                    count++;
                }
            }
        }
        hash1[i] = count_no;
        hash2[i] = count;
    }

    printf("Valid IP address are follows :\n");
    for(i = 0; i < 5 ; i++)
    {
        if(hash1[i]==12 && hash2[i]==3)
        {
            printf("%d ==> %s\t",i+1,Str[i]);
        }
    }
}

int main()
{
    char str[5][20];
    int i = 0,Ret = 0;

    printf("Enter IP address\n");
    for(i = 0; i < 5 ; i++)
    {
        gets(str[i]);
    }

    Check_IP(str);


}