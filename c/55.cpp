#include<stdio.h>
int greater(int,int);
int main()
{
	int a,b;
	printf("enter any two numbers");
	scanf("%d%d",&a,&b);
	printf("the greater number between them is %d",greater(a,b));
	return 0;
}
int greater(int a,int b)
{
	if(a>b)
	{
		return a;
	}
	else
	{
		return b;
	}
}
