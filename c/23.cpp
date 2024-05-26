#include<stdio.h>
int main()
{
	int n,r,num,rev;
	printf("enter a number:");
	scanf("%d",&n);
	num=n;
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	}
	if(rev==num)
	{

	printf("palindrome");
}
	else
	{
	 printf("not palindrome");
}
	return 0;
}
