#include<stdio.h>
int main()
{
	int i,j,rows;
	printf("enter the number of rows");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=i;j<=rows-1;j++)
		{
		printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		
		}
		
		printf("\n");
	}
	return 0;
	
}
