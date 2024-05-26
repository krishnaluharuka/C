#include<stdio.h>
#include<string.h>
struct colstds
{
	char name[25];
	int roll;
	char address[25];
	char email[10];
}col[20];
int main()
{
	int i;
	FILE *fp;
	fp=fopen("college.txt","w");
	for (i=0;i<2;i++)
	{
		printf("enter the name,roll,address,email of the student");
		scanf("%s%d%s%s",col[i].name,&col[i].roll,col[i].address,col[i].email);
		fprintf(fp,"%s\t%d\t%s\t%s\n",col[i].name,col[i].roll,col[i].address,col[i].email);
	}
	fclose(fp);
	
	fp=fopen("college.txt","r");
	for(i=0;i<2;i++)
	{
        fscanf(fp,"%s%d%s%s",col[i].name,&col[i].roll,col[i].address,col[i].email);
	    if(strcmp(col[i].address,"kathmandu")==0)
	    {
        printf("%s\n",col[i].name);	
	    }
	}
	fclose(fp);
	return 0;
	
	
}
