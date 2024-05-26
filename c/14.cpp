#include<stdio.h>
int main()
{
	int n,i;
	printf("enter the number whose multiplication table you want to display");
	scanf("%d",&n);
	printf("multiplication table of %d:\n",n);
	for(i=1;i<=10;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
	return 0;
}
