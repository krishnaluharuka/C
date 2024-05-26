#include<stdio.h>
#include<math.h>
int armstrong(int);
int prime(int);
int main()
{
	int n,flag;
	printf("enter a number");
	scanf("%d",&n);
	flag=prime(n);
	if(flag==1)
	printf("%d is prime\n",n);
	else
	printf("%d is not prime\n",n);
	flag=armstrong(n);
	if(flag==1)
	printf("%d is armstrong\n",n);
	else 
	printf("%d is not armstrong\n",n);
	return 0;
}
armstrong(int n)
{
	int r,sum=0,num,flag,count=0;
	num=n;
	while(num!=0)
	{
		num=num/10;
		count++;
	}
	num=n;
	while(num!=0)
	{
		r=num%10;
		sum=pow(r,count)+sum;
		num=num/10;
	}
	if(sum==n)
	flag=1;
	else
	flag=0;
	return flag;
}
prime(int n)
{
	int j,flag=1;
	for(j=2;j<n;j++)
	{
		if(n%j==0)
		{
		flag=0;
		break;
		}
	}
	return flag;
}
