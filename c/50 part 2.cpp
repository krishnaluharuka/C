#include<stdio.h>
#include<string.h>

int main()
{
	int i;
	char name[25];
	int age;
	char address[25];
	char phone[10];
	FILE *fp;
	fp=fopen("student.txt","r");
		
    while(fscanf(fp,"%s%d%s%s",name,&age,address,phone)!=EOF)
    {
	
		if(strcmp(address,"pokhara")==0)
		{
		
        printf("%s",name);
	}
	}
	fclose(fp);
	return 0;
	
}
