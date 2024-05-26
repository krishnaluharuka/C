#include<stdio.h>
struct employees
{
	int id;
	char name[30];
	int salary;
}emp1;
int main()
{
	int ch;
	do{
		printf("enter the id");
		scanf("%d",&emp1.id);
		printf("enter the name");
		scanf("%s",emp1.name);
		printf("enter the salary");
		scanf("%d",&emp1.salary);
		printf("enter 1 if you want to enter more data else press 2");
		scanf("%d",&ch);
		
	}while(ch==1);
	FILE *fp;
	fp=fopen("employee1.dat","w");
	fprintf(fp,"%d\t%s\t%d\n",emp1.id,emp1.name,emp1.salary);
	fclose(fp);
	fp=fopen("employee1.dat","r");
	printf("id\tname\t\tsalary\n");
	while(fscanf(fp,"%d%s%d",&emp1.id,emp1.name,&emp1.salary)!=EOF)
	{
		printf("%d\t%s\t%d\n",emp1.id,emp1.name,emp1.salary);
	}
	fclose(fp);
	return 0;
	
}
