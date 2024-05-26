#include<stdio.h>
int main()
{
	int a[10],i,j,temp;
	printf("enter array");
	for(i=0;i<10;i++)
	{
	scanf("%d",&a[i]);
	}
	for (i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
	{
		if(a[i]>a[j])
		{temp=a[i];
		a[i]=a[j];
		a[j]=temp;
	}
	}
	}
	printf("%d\t",a[9]);
}
