#include<stdio.h>
int main()
{
	int rollno,marks,n,i;
	char name[20];
	FILE *fpt;
	printf("enter the number of students");
	scanf("%d",&n);
	fpt=fopen("stu.text","w");
	for (i=0;i<n;i++)
	{
		printf("enter the name,roll no. and marks of the students");
		scanf("%s%d%d",name,&rollno,&marks);
		fprintf(fpt,"%s\t%d\t%d\t",name,&rollno,&marks);
	}
	fclose(fpt);
	fpt=fopen("stu.txt","r");
	printf("Name\tRollNo\tMarks\t");
	while(fscanf(fpt,"%s%d%d",name,&rollno,&marks)!=EOF)
	{
		printf("%s\t%d\t%d\t",name,&rollno,&marks);
	}
	fclose(fpt);
	return 0;
	
	
}
