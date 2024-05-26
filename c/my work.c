#include<stdio.h>
int main()
{
	char name;
	int age;
	float height;
	FILE *fp;
	fp=fopen("myname.dat","w");
	printf("enter yr name, age, height");
	scanf("%s%d%f",&name,&age,&height);
	fprintf(fp,"%s%d%f",name,age,height);
	fclose(fp);
	fp=fopen("myname.dat","r");
	fscanf(fp,"%s%d%f",&name,&age,&height);
	printf("my name is %s/n,my age is %d/n,my height is%f",name,age,height);
	fclose(fp);
	return 0;
}
