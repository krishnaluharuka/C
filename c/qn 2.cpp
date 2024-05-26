#include<stdio.h>
int main()
{
	int n,sum=0,r;
	printf("enter a four digit number");
	scanf("%d",&n);
	r=n%10;
	sum=sum+r;
	n=n/10;
	r=n%10;
	sum=sum+r;
	n=n/10;
	r=n%10;
	sum=sum+r;
	n=n/10;
	r=n%10;
	sum=sum+r;
    printf("%d is the sum of the 4digit number",sum);
    return 0;
	
}
