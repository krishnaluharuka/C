#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter the number of natural numbers");
	scanf("%d",&n);
	int i=1;
	while(i<=n)
	{
	sum=sum+i;
	i++;
    }
    printf("the sum of natural numbers is %d",sum);
    return 0;
}
