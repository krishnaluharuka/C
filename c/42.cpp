//Qn 3. Write fuction that displays the factorial of number 7 only.
#include<stdio.h>
int factorial(int);
int main()
{
	int result;
	int n=7;
	result=factorial(n);
	printf("the factorial of 7 is %d",result);
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
