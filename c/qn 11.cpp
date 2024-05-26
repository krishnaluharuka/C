#include<stdio.h>
int main()
{
	int i,n,fact=1;
	printf("enter  number");
	scanf("%d",&n);
	for(i=n;i>1;i--)
	{
		fact=fact*i;
		
	}
	printf("%d is factorial of %d",fact,n);
	return 0;
	
}
