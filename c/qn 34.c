#include<stdio.h>
int main()
{
	int age;
	float height;
	char name[50];
	FILE *fp;
	fp=fopen("myname.dat","w");
	printf("enter the name,age and height of a student");
	scanf("%s%d%f",name,&age,&height);
	fprintf(fp,"%s\t%d\t%f\n",name,age,height);
	fclose(fp);
	fp=fopen("myname.dat","r");
	fscanf(fp,"%s\t%d\t%f\n",name,&age,&height);
	printf("data u entered are\n");
	printf("%s\t%d\t%f\n",name,age,height);
	fclose(fp);
	return 0;
}
