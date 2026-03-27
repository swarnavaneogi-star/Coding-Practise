#include<stdio.h>
typedef struct employee
{
    char name[50];
    int id;
    float salary;
}employee;
int main()
{
   int n;
   printf("Enter the number of employees: ");
    scanf("%d", &n);
    employee emp[n];
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter the details of employee %d\n", i + 1);
        printf("Enter the name -> ");
        scanf(" %[^\n]s", emp[i].name);
        printf("Enter the id -> ");
        scanf("%d", &emp[i].id);
        printf("Enter the salary -> ");
        scanf("%f", &emp[i].salary);
    }
    float max = emp[0].salary;
    int max_index = 0;
    for(int i = 1; i < n-1; i++)
    {
        if(emp[i].salary > max)
        {
            max = emp[i].salary;
            max_index = i;
        }
    }
    printf("\n Printing employee names with highest salary and details \n");
    printf("Name\t\tID\tSalary\n");
    printf("%s\t%d\t%.2f\n", emp[max_index].name, emp[max_index].id, emp[max_index].salary);
    return 0;
}
