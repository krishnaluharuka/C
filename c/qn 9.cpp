#include<stdio.h>
int main()
{
	int i,a=1,b=1,t3,n;
	printf("enter the number of terms");
	scanf("%d",&n);
	printf("%d\t%d\t",a,b);
	for(i=1;i<n-1;i++)
	{
		t3=a+b;
		printf("%d\t",t3);
		a=b;
		b=t3;
	}
	return 0;
}
