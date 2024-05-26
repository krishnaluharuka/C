#include<stdio.h>
#include<string.h>
struct employees
{
	int id;
	char name[25];
	int salary;
}emp[200],temp;
int main()
{
	int n,i,j;
	printf("enter the number of students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the employee id");
		scanf("%d",&emp[i].id);
		printf("enter the employee name");
		scanf("%s",emp[i].name);
		printf("enter the employee salary");
		scanf("%d",&emp[i].salary);
	}
	printf("Employee ID \t\t EMPLOYEE NAME\t\t employee salary\t\n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(emp[i].name,emp[j].name)>0)
			{
			
		     temp=emp[i];
		     emp[i]=emp[j];
		     emp[j]=temp;
		    }
		}
	}
	for(i=0;i<n;i++)
	{
		
	printf("%d\t\t%s\t\t%d\t\n",emp[i].id,emp[i].name,emp[i].salary);
	}
	return 0;
}
