#include<stdio.h>
struct student
{
	char name[25];
	int roll;
	char phone[10];
}stu[3];
int main()
{
	int i;
	printf("enter the details for 3 students..\n");
	for(i=0;i<3;i++)
	{
		printf("enter the name");
		scanf("%s",stu[i].name);
		printf("enter the roll no.");
		scanf("%d",&stu[i].roll);
		printf("enter the phone number");
		scanf("%s",stu[i].phone);
		
	}
	printf("details of students\n");
	printf("Name\tRoll No\tPhone No\n");
	for (i=0;i<3;i++)
	{
		printf("%s\t",stu[i].name);
		printf("%d\t",stu[i].roll);
		printf("%s\n",stu[i].phone);
		
	}
	return 0;
	
}

