#include<stdio.h>
struct studentsrecord
{
	char name[50];
	int roll;
	int marks;
}stds[10];
int main()
{
	int n,i;
	FILE *fp;
    printf("Enter the number of students:");
    scanf("%d",&n);
	fp=fopen("abc.txt","w");
	printf("enter the asked data of students\n");
	for(i=0;i<n;i++)
	{
		printf("enter the name of the student");
		scanf("%s",stds[i].name);
		printf("enter the roll number");
		scanf("%d",&stds[i].roll);
		printf("enter the marks");
		scanf("%d",&stds[i].marks);
        if(stds[i].marks>=75)
        {
		fprintf(fp,"%s\t%d\t%d\n",stds[i].name,stds[i].roll,stds[i].marks);
	    }
	}
	fclose(fp);
    return 0;
}

