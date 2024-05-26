#include<stdio.h>
int main()
{
	int i,n,mul;
	xx:
	printf("enter a positive integer less than 30\n");
	scanf("%d",&n);

		if(n>30)
		goto xx;
		else
		{
		
	printf("Multiplication table of %d:\n",n);
	for(i=1;i<=10;i++)
	{
		mul=n*i;
		printf("%d*%d=%d\n",n,i,mul);
	}
}
	return 0;
}
