#include<stdio.h>
int main()
{
	int n[5],i,max,min;
	for(i=0;i<5;i++)
	{
		printf("enter the number");
		scanf("%d",&n[i]);
	}
	max=n[0];
	min=n[0];
	
	for(i=0;i<5;i++)
	{
		if(n[i]>max)
	    max=n[i];
		if(n[i]<min)
	    min=n[i];
	}
	printf("greatest num is %d",max);
	printf("least num is %d",min);
	return 0;

	
	
	
}
