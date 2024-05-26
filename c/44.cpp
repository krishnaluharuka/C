#include<stdio.h>

int main()
{
	int i,j,x=0,len;
	char a[]={"**#*??*??+"};
	
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c\t",a[x++]);
			
		}
		++a[0];
		printf("\n");
	}
	return 0;
}
