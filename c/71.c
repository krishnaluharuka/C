//35.A C program to create a data file "employee.dat" to store employee id,name and salary of employees as long as user wants. Also read the contents from the file and display them on the screen.
#include<stdio.h>
struct employees
{
	int empid;
	char name[40];
	float salary;
}emp;
int main()
{
	int ch;
	FILE *fptr;
	fptr=fopen("employee.dat","w");
	do
	{
	printf("enter empid,name and salary");
	scanf("%d%s%f",&emp.empid,emp.name,&emp.salary);
	fprintf(fptr,"%d\t%s\t%f\n",emp.empid,emp.name,emp.salary);
	printf("Do you want to continue(press 1 for yes 2 for no)?");
	scanf("%d",&ch);
    }while(ch==1);
	fclose(fptr);
	fptr=fopen("employee.dat","r");
	printf("\nEmp id\t Name\t Salary");
	while(fscanf(fptr,"%d%s%f",&emp.empid,emp.name, &emp.salary)!=EOF)
	{
	printf("\n%d\t%s\t%f",emp.empid,emp.name,emp.salary);
    }fclose(fptr);
	return 0;
}

