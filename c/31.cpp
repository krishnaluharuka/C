#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("enter the number of rows");
	scanf("%d",&rows);
	for(i=rows;i>0;i--)
	{
		for(j=i;j>0;j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
