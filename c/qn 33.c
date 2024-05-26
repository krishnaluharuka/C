#include<stdio.h>
struct employees
{
	int empid;
	char name[25];
	int salary;
}emp[200],temp;
int main()
{
	int i,n,j;
	printf("How many records\n");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("enter the empid,name and salary of employee respectively");
		scanf("%d%s%d",&emp[i].empid,emp[i].name,&emp[i].salary);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(emp[i].salary>emp[j].salary)
			{
				temp=emp[i];
				emp[i]=emp[j];
				emp[j]=temp;
			}
	    }
	}
		printf("\nEmpid\tName\tSalary");
	for(i=0;i<n;i++)
	{
		printf("\n%d\t%s\t%d",emp[i].empid,emp[i].name,emp[i].salary);
	}
	return 0;
}

