#include<stdio.h>
struct students
{
	char name[50];
	int roll;
	int marks;
}stds[100];
int main()
{
	int i,n;
	printf("enter the number of stds");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the name,roll,marks of std");
		scanf("%s\t%d\t%d",stds[i].name,&stds[i].roll,&stds[i].marks);
	}
	FILE *fp;
	fp=fopen("cde.txt","w");
	for(i=0;i<n;i++)
	{
		fprintf(fp,"%s\t%d\t%d",stds[i].name,stds[i].roll,stds[i].marks);
	}
	fclose(fp);
	printf("name\troll\tmarks\n");
	fp=fopen("cde.txt","r");
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%s%d%d",stds[i].name,&stds[i].roll,&stds[i].marks);
		printf("%s\t%d\t%d\n",stds[i].name,stds[i].roll,stds[i].marks);
	}
	fclose(fp);
	return 0;
	
	
	
	
}
