#include<stdio.h>
void main()
{
	int n,bin,rem,dec=0,base=1;
	printf("Enter any binary number");
	scanf("%d",&n);
	bin=n;
	while(n>0)
	{
		rem=n%10;
		dec=dec+rem*base;
		n=n/10;
		base=base*2;
	}
	printf("the binary number is %d",bin);
	printf("the dec number is %d",dec);
	return 0;
}
