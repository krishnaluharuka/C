#include<stdio.h>
void main()
{
	long int dec,rem,q,dn=0,m,l;
	int i=1,j,temp;
	char s;
	printf("Convert Decimal to Hexadecimal:\n\n");
	printf("Input any decimal number:");
	scanf("%ld",&dec);
	q=dec;
	for(l=q;l>0;l=l/16)
	{
		temp=q%16;
		if(temp<10)
		temp=temp+48;
		else
		{
			temp=temp+55;
			dn=dn*100+temp;
		}
	}
	printf("The equivalent Hexadecimal Number:");
	for(m=dn;m>0;m=m/100)
	{
		s=m%100;
		printf("%c",s);
	}
}
