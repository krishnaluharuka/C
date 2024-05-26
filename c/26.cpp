#include<stdio.h>
int main()
{
	int n,num,result=0,r;
	printf("enter a number of three digit");
	scanf("%d",&n);
	num=n;
    while(n!=0)
    {
    	r=n%10;
    	result=result+(r*r*r);
    	n=n/10;
	}
	if(num==result)
	{
		printf("armstrong");
	}
	else
	{
	
	printf("not armstrong");
}
	return 0;
	
}
