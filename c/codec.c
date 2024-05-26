#include<stdio.h>
int main()
{
	int n,dec[10],i;
	printf("enter a number");
	scanf("%d",&n);
    for(i=0;n>0;i++)
    {
    	dec[i]=n%2;
    	n=n/2;
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",dec[i]);
	}
	return 0;
	
}
