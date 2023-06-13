// Write a function to sort employees according to their names [refer structure fromquestion 1]
 

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

void Add_Employee(struct Employee *input, int Size)
{
    int i = 0;
    for(i = 0 ; i < Size ; i++)
    {
        printf("Enter %d Employee",i+1);

        printf("\nEnter employee id\n");
        scanf("%d",&input[i].id);

        printf("Enter employee name\n");
        scanf("%s",&input[i].name);

        printf("Enter employee salary\n");
        scanf("%f",&input[i].salary);
        printf("\n");
    }
}

void Display(struct Employee *List,int Size)
{
    int i = 0;
    
    printf("----------------Employee Info ----------------");
                for(i = 0 ; i < Size ; i++)
                {
                    printf("\n");
                    printf("ID Employee        : %d\n",List[i].id);
                    printf("Employee Name      : %s\n",List[i].name);
                    printf("Employee Salary    : %0.2f\n",List[i].salary);
                    printf("\n");
                }
}

void Find_Highest_Salary(struct Employee *List,int Size)
{
    int i = 0,Max = 0;
    for(i = 0; i < Size ; i++)
    {
        if(List[i].salary > Max)
        {
            Max = List[i].salary;
        }
    }

    printf("Maximum Salary of Employee = %d\n",Max);
}

void Sort_Salary(struct Employee *Sort,int Size)
{
    int i = 0,Max = 0,j = 0;
    struct Employee Temp;

    for(i = 0; i < Size-1 ; i++)
    {
       for(j = i+1 ; i < Size ; j++)
       {
            if(Sort[i].salary > Sort[j].salary)
            {
                Temp = Sort[i];
                Sort[i] = Sort[j];
                Sort[j] = Temp;
            }
       }
    }
}

void Sort_Name(struct Employee *Sort,int Size)
{
    int i = 0,Max = 0,j = 0;
    struct Employee Temp;

    for(i = 0; i < Size-1 ; i++)
    {
       for(j = i+1 ; i < Size ; j++)
       {
            if(strcmp(Sort->name[i],Sort->name[j]) > 0)
            {
                Temp = Sort[i];
                Sort[i] = Sort[j];
                Sort[j] = Temp;
            }
       }
    }
}

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
        printf("3. Highest Salary\n");
        printf("4. Sort by Salary\n");
        printf("5. Sort by Name\n");
        printf("6. Exit\n");

        printf("Enter your choice\n");
        scanf("%d",&choice);
        
        
        switch(choice)
        {
            case 1:
                printf("Enter size\n");
                scanf("%d",&size);

                Add_Employee(obj,size);
                break;
            
            case 2:
                printf("Enter size\n");
                scanf("%d",&size);

                Display(obj,size);
                break;

            case 3:
                printf("Enter size\n");
                scanf("%d",&size);

                Find_Highest_Salary(obj,size);
                break;

            case 4:
                printf("Enter size\n");
                scanf("%d",&size);

                Sort_Salary(obj,size);
                break;
            
            case 5:
                printf("Enter size\n");
                scanf("%d",&size);

                Sort_Name(obj,size);
                break;

            case 6:
                printf("Exit....\n");
                return 0;
            
            default:
                printf("Invalid choice\n");
                break;
        }
    }
    return 0;
}