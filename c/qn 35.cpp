#include<stdio.h>
struct employee
{
	char name[25];
	int id;
	float salary;
}emp;
int main()
{
	int ch;
	FILE *fp;
	fp=fopen("employee.dat","w");
	do
	{
		printf("enter the id,name and salary of the employee");
		scanf("%d%s%f",&emp.id,emp.name,&emp.salary);
		fprintf(fp,"%d\t%s\t%f\n",emp.id,emp.name,emp.salary);
		printf("do you want to enter more data?(if yes press 1 if no press 2)");
		scanf("%d",&ch);
	}while(ch==1);
	fclose(fp);
	fp=fopen("employee.dat","r");
	printf("ID\tName\tSalary\n");
	while(fscanf(fp,"%d%s%f",&emp.id,emp.name,&emp.salary)!=EOF)
		{
		printf("%d\t%s\t%f\n",emp.id,emp.name,emp.salary);
	    }
	    fclose(fp);
	    return 0;
		
}

