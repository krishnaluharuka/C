#include<stdio.h>
int main()
{
	int a[]={-3,-4,8,9,10,-17},sum=0,i;
	for(i=0;i<6;i++)
	{
		sum=sum+a[i];
	}
	printf("the sum of the given numbers is %d",sum);
	return 0;
	
}
