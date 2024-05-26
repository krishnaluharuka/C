#include<stdio.h>
int factorial (int);
int main()
{
	int n,facto;
	printf("enter a number");
	scanf("%d",&n);
	facto=factorial (n);
	printf("factorial is %d",facto);
}
int factorial (int n)
{
	if(n>=1)
	return (n*factorial(n-1));
	else
	return 1;
}
