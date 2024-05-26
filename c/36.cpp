#include<stdio.h>
#include<string.h>
struct student
{
	char name[25];
	char address[25];
	char cell[25];
	int age;
}stu[300];

int main()
{
	int i,n;
	printf("enter the number of students record u have to enter");
	scanf("%d",&n);
	FILE *fp;
	fp=fopen("student.txt","w");
	for(i=0;i<n;i++)
	{
		printf("enter the name of the student");
		scanf("%s",stu[i].name);
		printf("enter the address of the student");
		scanf("%s",stu[i].address);
		printf("enter the cell number of the student");
		scanf("%s",stu[i].cell);
		printf("enter the age of the student");
		scanf("%d",&stu[i].age);
		fprintf(fp,"%s\t%s\t%s\t%d\n",stu[i].name,stu[i].address,stu[i].cell,stu[i].age);
		
	}
	fclose(fp);
	fp=fopen("student.txt","r");
	printf("name\taddress\tcellnumber\tage\n");
	for(i=0;i<n;i++)
	{
		fscanf(fp,"%s%s%s%d",stu[i].name,stu[i].address,stu[i].cell,&stu[i].age);
		if(strcmp(stu[i].address,"pokhara")==0)
		{
	    	printf("%s\t%s\t%s\t%d\n",stu[i].name,stu[i].address,stu[i].cell,stu[i].age);
	    }
	}
	fclose(fp);
	return 0;
}
