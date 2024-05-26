#include<stdio.h>
int main()
{
	int a1[3][3],a2[3][3],i,j,sum[3][3];
	printf("enter the numbers for Set A");
	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&a1[i][j]);
	    
        }
    
    }
    printf("enter numbers for set B");
    for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		scanf("%d",&a2[i][j]);
	    
        }
    
    }
    	for (i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		sum[i][j]=a1[i][j]+a2[i][j];
	    
        }
    
    }
    printf("the sum of two matrices is:\n");
    	for (i=0;i<3;i++)
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
