#include<stdio.h>
int factorial(int);
int main()
{
	int n,result;
	printf("enter the number");
	scanf("%d",&n);
	result=factorial(n);
	printf("the factorial of %d is %d",n,result);
	return 0;
}
factorial(int n)
{
	int i,fact=1;
	for(i=n;i>1;i--)
	{
		fact=fact*i;
	}
	return fact;
	
}
