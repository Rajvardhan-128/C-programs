#include <stdio.h>
#include <stdlib.h>
 
typedef struct{ 
    char employee_name[30];
    int employee_number;
    int salary;
    int service_year 
}  Employee ;
 
int main()
{
    int i, n=5;
 
    Employee employees[i];
 
    //Taking each employee detail as input
 
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<5; i++){
 
        printf("Employee %d:- \n",i+1);
        //Name
        printf("Name: ");
        scanf("%s",employees[i].employee_name);
        //ID
        printf("Id: ");
        scanf("%d",&employees[i].employee_number);
        //Salary
        printf("Salary: ");
        scanf("%d",&employees[i].salary);
        //Year of service_year
        printf("Year of Service: ");
        scanf("%d",&employees[i].service_year);
    }
 
    //Displaying Employee details
 
    printf("-------------- All Employees Details ---------------\n");
 
    for(i=0; i<n; i++){
 
        printf("Employee Name : \n");
        scanf("%s \n",employees[i].employee_name);
 
        printf("Employee Number :\n ");
        scanf("%d \n",employees[i].employee_number);
 
        printf("Salary :\n ");
        scanf("%d \n",employees[i].salary);
        
        printf("Year of Service :\n ");
        scanf("%d \n",employees[i].service_year);
 
        printf("\n");
    }
 
    return 0 ;
}