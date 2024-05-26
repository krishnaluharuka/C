#include<stdio.h>
int main()
{
	int n,i;
	printf("enter any number");
	scanf("%d",&n);
	for (i=2;i<n;i++)
	{
		if(n%i==0)
		{
		
		printf("composite");
		break;
	}
	}
	if(i==n)
	
		printf("prime");
	
	return 0;
}
