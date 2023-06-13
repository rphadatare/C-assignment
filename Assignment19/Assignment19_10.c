// Create an authentication system. It should be menu driven.

#include<stdio.h>
#include<string.h>

#define CORRECT_NAME "admin"
#define CORRECT_USERNAME "admin@"
#define CORRECT_PASSWORD "Admin@123"

int Check(char Name[],char Username[],char Password[])
{
    int flag = 1;
    if( strcmp(Name,CORRECT_NAME)==0         && 
        strcmp(Username,CORRECT_USERNAME)==0 && 
        strcmp(Password,CORRECT_PASSWORD)==0 )
    {
        return 1;
    } 
    else 
    {
        return -1;
    }
    
}
int main()
{
    int choice = 0;
    int Ret = 0;
    char name[25];
    char username[25];
    char password[25];

    while(1)
    {
        printf("1. Login\n");
        printf("2. Exit\n");
        printf("Enter your choice\n");
        scanf("%d",&choice);

        switch (choice)
        {
            case 1:
            {
                printf("\nEnter your name: ");
                scanf("%s", name);

                printf("\nEnter your username: ");
                scanf("%s", username);

                printf("\nEnter your password: ");
                scanf("%s", password);

                Ret = Check(name,username,password);
                if(Ret==1)
                {
                    printf("\n---Authentication successful---!\n");
                } 
                else 
                {
                    printf("\n---Authentication failed. Please try again.---\n");
                }
                break;
            }

            case 2:
            {
                printf("\nExiting...\n");
                return 0;
                break;
            }

            default:
            {
                printf("\nInvalid choice. Please try again.\n");
                break;
            }
        }
    }
    return 0;
}