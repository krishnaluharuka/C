#include<stdio.h>
int main()
{
	int n,i,hex,j,temp,s,dn;
	char c;
	printf("enter any number");
	scanf("%d",&n);
	for(i=n;n>0;i/16)
	{
		hex=n/16;
		if(hex<9)
		temp=temp+48;
		else
		{
		
		temp=temp+55;
	}
	dn=dn*100+temp;
	}
	for(j=dn;j>0;j=j/100)
	{
		s=j%100;
		printf("%d",s);
	}
}
