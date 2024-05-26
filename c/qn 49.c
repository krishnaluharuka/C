//recursive function
/* recursive function is the the function that call itself*/
/* Recursion is the process of using the recursive function to repeat the execution of 
statements many times*/
//A program to input a number and print its factorial using recursive function
#include<stdio.h>
int factorial(int);
int main()
{
	int n,f;
	printf("enter a number");
	scanf("%d",&n);
	f=factorial(n);
	printf("the factorial of %d is %d",n,f);
	return 0;
	
	
}
int factorial (n)
{
	int i,fact=1;
	for (i=2;i<=n;i++)
	{
		fact=fact*i;
	}
	return fact;
	
}

