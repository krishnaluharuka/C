//22.Write a C program to any 5 numbers and find the biggest and the smallest among them.
#include<stdio.h>
int main()
{
	int n[10],i,max,min;
	for(i=0;i<10;i++)
	{
		printf("enter the number");
		scanf("%d",&n[i]);
	}
	max=n[0];
	min=n[0];
	
	for(i=0;i<10;i++)
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

