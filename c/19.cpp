#include<stdio.h>
int main()
{
	int n,count=0,num;
	printf("enter a number:\n");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
	n=n/10;
	count++;
	}
	printf("the total number of digits in %d is %d",num,count);
	return 0;
	
}
