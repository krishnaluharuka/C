#include<stdio.h>
struct studentsrecord
{
	char name[50];
	int roll;
	int marks;
}stds[10];
int main()
{
	int i;
	FILE *fp;
	fp=fopen("stdrecord.dat","w");
	printf("enter the asked data of students\n");
	for(i=0;i<3;i++)
	{
		printf("enter the name of the student");
		scanf("%s",stds[i].name);
		printf("enter the roll number");
		scanf("%d",&stds[i].roll);
		printf("enter the marks");
		scanf("%d",&stds[i].marks);
		fprintf(fp,"%s\t%d\t%d\n",stds[i].name,stds[i].roll,stds[i].marks);
	}
	fclose(fp);
	printf("name\trollno\tmarks\n");
	fp=fopen("stdrecord.dat","r");
	while(fscanf(fp,"%s%d%d",stds[i].name,&stds[i].roll,&stds[i].marks)!=EOF)
	{
		printf("%s\t%d\t%d\n",stds[i].name,stds[i].roll,stds[i].marks);
		
	}
	fclose(fp);
	return 0;
}
