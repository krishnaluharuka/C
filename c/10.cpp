#include<stdio.h>
int main()
{
	int n,d,q,r;
	
	printf("enter a number");
	scanf("%d",&n);
	printf("enter the divisor");
	scanf("%d",&d);
	q=n/d;
	r=n%d;
	printf("the quotient and remainder of %d are %d and %d",n,q,r);
	return 0;
}
