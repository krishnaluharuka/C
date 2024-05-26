#include<stdio.h>
struct person
{
	char name[25];
	char add[25];
	int age;
	
}p[10];
int main()
{
	int i;
	for (i=0;i<2;i++)
	{
		printf("enter the name of the person");
		getchar();//it takes input which won't be shown in output screen
		gets(p[i].name);
		printf("enter the address of the person");
		getchar();
		gets(p[i].add);
		printf("enter the age of the person");
		scanf("%d",&p[i].age);
	}
	printf("name\taddress\tage\n");
	
	for (i=0;i<2;i++)
	{
		printf("%s\t%s\t%d\n",p[i].name,p[i].add,p[i].age);
    }
    return 0;
}

