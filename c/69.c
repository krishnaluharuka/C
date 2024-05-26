//49. WAP to take an integer in array of size 3 by 3 and display sum of element of array.
#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,sum[3][3];
	printf("enter the elements for first 3*3 matrix ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the elements for second 3*3 matrix ");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d ",&b[i][j]);
		}
		
	}
	printf("the sum of two 3*3 matrix is\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
		
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",sum[i][j]);
			printf("\t");
		
		}
		printf("\n");
	}
	
	return 0;
}

