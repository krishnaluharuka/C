#include<stdio.h>
int main()
{
	int n,i,fact=0;
	printf("enter a number");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
		    printf("not prime");
			fact=1;
		break;
	    }
	    
	}
	if(fact==0)
	{
		printf("prime");
	}
	return 0;
	
}
