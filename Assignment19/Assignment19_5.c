// Suppose we have a list of email addresses, check whether all email addresses have
// ‘@’ in it. Print the odd email out.

#include <stdio.h>
#include <stdbool.h>
#include <stdbool.h>

int Check_Emails(char mails[5][20])
{
    int i = 0, j = 0, flag = -1;

    for(i = 0 ; i < 5 ; i++)
    {
        if(mails[i] == '@')
        {
                flag = 1;
        }
        else
        {
                flag = -1;
                break;
        }
    }

    if(flag == 1)
    {
        printf("All emails contain @ in it\n");
    }
    else
    {
        printf("All emails not contain @ in it\n");
    }
}

int main()
{
    char str[5][20];
    int i = 0 , Ret = 0;

    printf("Enter emails \n");
    for(i  = 0 ; i < 5; i++)
    {
        gets(str[i]);
    }

    Check_Emails(str);
    

    return 0;
}
