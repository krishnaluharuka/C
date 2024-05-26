#include<stdio.h>
int main()
{
	int age;
	char name[25];
	FILE *fp;
	fp=fopen("record.dat","r");
	fscanf(fp,"%s%d",name,&age);
	printf("name is %s",name);
	printf("age is %d",age);
	fclose(fp);
	return 0;
}
