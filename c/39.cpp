#include<stdio.h>
struct student
{
	char name[50];
	int roll;
	int marks;
}s;
int main()
{
	printf("enter the name of the student");
	fgets(s.name,sizeof(s.name),stdin);
	printf("enter the roll number of the student");
	scanf("%d",&s.roll);
	printf("enter the marks");
	scanf("%d",&s.marks);
	printf("Name=%s,Roll=%d,Marks=%d",s.name,s.roll,s.marks);
	return 0;
	
}
