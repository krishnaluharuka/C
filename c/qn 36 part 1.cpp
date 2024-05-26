#include<stdio.h>
int main()
{
	int roll,n,i;
	float percentage;
	char name[25];
	
	FILE *fp;
	fp=fopen("std.txt","w");
	printf("enter the number of students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter the name of the student");
	scanf("%s",name);
	printf("enter the roll number");
	scanf("%d",&roll);
	printf("enter the percentage");
	scanf("%f",&percentage);
	fprintf(fp,"%s\t%d\t%f\n",name,roll,percentage);
}
	fclose(fp);
	
}
