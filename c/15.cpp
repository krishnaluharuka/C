#include<stdio.h>
int main()
{
	int t1=0,t2=1,t3,n,i;
	printf("enter the number of terms");
	scanf("%d",&n);
	printf("%d,\t",t1);
	for(i=1;i<=n;i++)
	{
		printf("%d,\t",t2);
		t3=t1+t2;
		t1=t2;
		t2=t3;
	}
	return 0;
	
	
}
