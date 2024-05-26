#include<stdio.h>
int main()
{
	int n,num,r;
	int rev=0;
	printf("enter any number");
	scanf("%d",&num);
	n=num;
	while(num!=0)
	{
		r=num%10;
		rev=rev*10+r;
		num=num/10;
	}
	if(n==rev)
	printf("palindrome");
	else
	printf("not palindrome");
	return 0;
}
