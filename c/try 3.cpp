#include<stdio.h>
int main()
{
	int salary[10],i,count;
	for (i=0;i<10;i++)
	{
		printf("enter the salary of the employees");
		scanf("%d",&salary[i]);
		
	}
	for(i=0;i<10;i++)
	{
		if(salary[i]>=20000&&salary[i]>=30000)
		count++;
	}
	printf("the number of employees having salary between 20000 and 30000");
	return 0;
}
