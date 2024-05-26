#include<stdio.h>
int sum(int,int);
int diff(int,int);
int product(int,int);
int main()
{
	int a,b,result1,result2,result3;
	printf("enter any two numbers");
	scanf("%d%d",&a,&b);
	result1=sum(a,b);
	result2=diff(a,b);
	result3=product(a,b);
	printf("%d+%d=%d\n",a,b,result1);
	printf("%d-%d=%d\n",a,b,result2);
	printf("%d*%d=%d\n",a,b,result3);
	return 0;
}
int sum(int a,int b)
{
	int add;
    add=a+b;
	return add;	
}

int diff(int a,int b)
{
	int minus;
    minus=a-b;
	return minus;	
}
int product(int a,int b)
{
	int mul;
    mul=a*b;
	return mul;	
}


