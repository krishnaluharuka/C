#include<stdio.h>
void sum(int);
int main()
{
	int n;
	printf("enter the how many numbers are to be added");
	scanf("%d",&n);
	sum(n);
	return 0;
}
void sum(int n)
{
	int i,a[100],sum=0;
	for(i=0;i<n;i++)
	{
		printf("enter the number");
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	printf("the sum of %d numbers is %d",n,sum);
}
