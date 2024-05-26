#include<stdio.h>
int main()
{
	int a,b,sum;
	printf("enter any two numbers");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("the sum of two numbers is %d\n",sum);
	FILE *fp;
	fp=fopen("sum.dat","w");
	fprintf(fp,"%d\n",sum);
	fclose(fp);
	fp=fopen("sum.dat","r");
	printf("the sum of two numbers is:\t");
	fscanf(fp,"%d",&sum);
	printf("%d",sum);
	fclose(fp);
	return 0;
}
