#include<stdio.h>
int main()
{
    int i,n;
    int marks;
	char name[25];
	FILE *fp;
	fp=fopen("students.dat","w");
	printf("enter the number of students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter the name and marks of the student");
	scanf("%s%d",name,&marks);
	fprintf(fp,"%s\t%d\n",name,marks);
    }
    fclose(fp);
    fp=fopen("students.dat","r");
    printf("name\tmarks\n");
    for(i=0;i<n;i++)
	{
	fscanf(fp,"%s\t%d\n",name,&marks);
	printf("%s\t%d\n",name,marks);
    }
    fclose(fp);
    return 0;
    
    
    
}
