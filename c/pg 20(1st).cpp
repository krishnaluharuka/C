#include<stdio.h>
int main()
{
	int n,i;
	struct student
	{
		char name[25];
		int roll no;
		int markscomp;
	}stu[200];
	FILE *fp;
	printf("enter the number of students");
	scanf("%d",&n);
	fp=fopen("abc.txt","w");
	for(i=0;i<n;i++)
	{
		
	}
	
}
