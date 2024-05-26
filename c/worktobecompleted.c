#include<stdio.h>
int main()
{
	char x='a';
	int i,j;
	for (i='a';i<'e';i++)
	{
		for(j='a';j<=i;j++)
		{
			printf("%c\t",x);
		}
		x=x+1;
		if(j=='d')
		x='e';
		printf("\n");
	}
	return 0;
	
	
}
