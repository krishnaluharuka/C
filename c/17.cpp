#include<stdio.h>
int main()
{
	int a,b,lcm,gcd,i;
	printf("enter any two integers");
	scanf("%d%d",&a,&b);
	for(i=1;i<=a&&i<=b;i++)
	{
		if(a%i==0&&b%i==0)
		{
			gcd=i;
		}
	}
	lcm=(a*b)/gcd;
	printf("lcm(%d,%d)=%d",a,b,lcm);
	return 0;
	
}
