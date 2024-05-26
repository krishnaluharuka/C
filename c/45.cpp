#include<stdio.h>
struct Employee
{
	char name[25];
	int salary;
	char address[25];
}emp[5];
int main()
{
	int i;
	for(i=0;i<5;i++)
	{
		printf("enter the name,salary and address of the employee");
		scanf("%s%d%s",emp[i].name,&emp[i].salary,emp[i].address);
	}
	printf("the employees name list whose salary is more than 10000:");
	for(i=0;i<5;i++)
	{
		if(emp[i].salary>10000)
		{
			printf("%s\n",emp[i].name);
		}
	}
	return 0;
	
}

