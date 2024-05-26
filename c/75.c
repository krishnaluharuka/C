#include<stdio.h>
#include<string.h>
struct employees
{
	int id;
	char name[30];
	int salary;
}emp[200],temp;
int main()
{
	int n,i,j;
	printf("Enter the number of employess");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the id");
		scanf("%d",&emp[i].id);
		printf("enter the name");
		scanf("%s",emp[i].name);
		printf("enter the salary");
		scanf("%d",&emp[i].salary);
	}
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
	printf("id\tname\t\tsalary\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%s\t\t%d\n",emp[i].id,emp[i].name,emp[i].salary);
	}
	return 0;
	
	
}
