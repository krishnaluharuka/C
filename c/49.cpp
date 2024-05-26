#include<stdio.h>
int main()
{
	int a[3][3],i,j,sum=0;
	printf("enter the elements for 3*3 matrix ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Our 3*3 matrix is:\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum=sum+a[i][j];
		
		}
	}
	printf("the sum of all element is %d",sum);
	return 0;
	
	
	
}
