#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("how many natural numbers are to be calculated ");
	scanf("%d",&n);
	
	for (i=1;i<=n;i++)
	{
	sum=sum+i;	
	}
	printf("the sum of the natural numbers is %d",sum);
	return 0;
	
}
