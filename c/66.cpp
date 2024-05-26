#include<stdio.h>
#include<string.h>
int main()
{
	int i,ch;
	char name[25];
	int age;
	char address[25];
	char phone[10];
	
	FILE *fp;
	fp=fopen("students.txt","w");
	do
	{
		printf("enter the name,age,address,phone number of the student");
		scanf("%s%d%s%s",name,&age,address,phone);
		fprintf(fp,"%s\t%d\t%s\t%s\n",name,age,address,phone);
		printf("if u want to enter more data press 1 else press 2");
		scanf("%d",&ch);
	}while(ch==1);
	fclose(fp);
	fp=fopen("students.txt","r");
		
    while(fscanf(fp,"%s%d%s%s",name,&age,address,phone)!=EOF)
    {
	
		if((strcmp(address,"pokhara")==0)&&age>=25)
		{
		
        printf("%s",name);
	}
	}
	return 0;
	
	
}
