#include<stdio.h>
int main()
{
	int n,dec=0,oct[10],base=1,rem,i;
	printf("enter a number in binary");
	scanf("%d",&n);
	while(n>0)
	{
		rem=n%10;
		dec=dec+rem*base;
		n=n/10;
		base=base*2;
	}
	for(i=0;dec>0;i++)
	{
		oct[i]=dec%8;
		dec=dec/8;
		
	}

	for(i=i=1;i>=0;i--)
	{
	printf("%d",oct[i]);	
	}
	
	return 0;
	
}
