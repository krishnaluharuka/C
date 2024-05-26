#include<stdio.h>
int factorial(int);
int main()
{
	int  n;
	int facto;
	printf("enter a number");
	scanf("%d",&n);
	facto=factorial(n);
		printf("the factorial of %d is %d",n,facto);
	return 0;
}
int factorial(int n)
{
	if(n>=1)
	return (n*factorial(n-1));
	else
	return 1;
}
