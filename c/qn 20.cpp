#include<stdio.h>
int main()
{
	int n,i,j,a[200],temp;
	printf("how many numbers?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the number");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		    }   
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
	
	
}
