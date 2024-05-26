#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter the number of natural numbers");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("the sum of natural numbers is %d",sum);
	return 0;
}
