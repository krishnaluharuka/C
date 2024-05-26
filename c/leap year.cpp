#include<stdio.h>
int main()
{
	char name[25];
	char num[10];
	int i;
	FILE *fp;
	fp=fopen("student.txt","w");
	for (i=0;i<10;i++)
	{
		printf("enter the name of the person");
		scanf("%s",name);
		printf("enter the phone number of the person");
		scanf("%s",num);
		fprintf(fp,"%s\t%s\n",name,num);
	}
	fclose(fp);
	fp=fopen("student.txt","r");
	printf("the list of name and phone number of ten people:\n");
	for (i=0;i<10;i++)
	{
		fscanf(fp,"%s\t%s\n",name,num);
		printf("%s\t%s\n",name,num);
		
	}
	fclose(fp);
	return 0;
}
