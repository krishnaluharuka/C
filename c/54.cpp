#include<stdio.h>
int main()
{
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	int b[3][3]={{2,4,6,},{2,7,8},{1,7,9}};
	int i,j,sum=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]%2==0)
			{
				sum=sum+a[i][j];
			}
			if(b[i][j]%2==0)
			{
				sum=sum+b[i][j];
			}
		}
	}
	printf("the sum of even numbers of two 3*3 matrix is %d",sum);
	return 0;
}
