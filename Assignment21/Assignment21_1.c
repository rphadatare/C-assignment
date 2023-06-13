// Define a structure Employee with member variables id, name, salary

#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};


int main()
{
    struct Employee obj[50];
    int choice = 0 , i = 0;
    int size = 50;
    int Temp = 0;
     
    
    
    while(1)
    {
        printf("1. Add New Employee\n");
        printf("2. Display All Employee info\n");
        printf("3. Exit\n");

        printf("Enter your choice\n");
        scanf("%d",&choice);
        

        switch(choice)
        {
            case 1:
                printf("Enter size\n");
                scanf("%d",&size);
                for(i = 0 ; i < size ; i++)
                {
                    printf("Enter %d Employee",i+1);

                    printf("\nEnter employee id\n");
                    scanf("%d",&obj[i].id);

                    printf("Enter employee name\n");
                    scanf("%s",&obj[i].name);

                    printf("Enter employee salary\n");
                    scanf("%f",&obj[i].salary);
                    printf("\n");
                }
                break;
            
            case 2:
                printf("----------------Employee Info ----------------");
                for(i = 0 ; i < size ; i++)
                {
                    printf("\n");
                    printf("ID Employee        : %d\n",obj[i].id);
                    printf("Employee Name      : %s\n",obj[i].name);
                    printf("Employee Salary    : %0.2f\n",obj[i].salary);
                    printf("\n");
                }
                break;
            case 3:
                printf("Exit....\n");
                return 0;
            
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}