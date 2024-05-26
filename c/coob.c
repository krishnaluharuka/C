#include<stdio.h>
int main()
{
	int n,dec=0,bin[10],rem,base=1,i;
	printf("enter a number in octal");
	scanf("%d",&n);
	printf("%d\t",n);
	while(n>0)
	{
		rem=n%10;
		dec=dec+rem*base;
		n=n/10;
		base=base*8;
	}
	printf("%d\t",dec);
	for(i=0;dec>0;i++)
	{
		bin[i]=dec%2;
		dec=dec/2;
		
	}
	for(i=i-1;i>=0;i--)
	{
		printf("%d",bin[i]);
	}
	return 0;
}
