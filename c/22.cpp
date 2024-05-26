#include<math.h>
#include<stdio.h>
int main()
{
	int base,exp,result;
	printf("enter the base number");
	scanf("%d",&base);
	printf("enter the exponent");
	scanf("%d",&exp);
	result=pow(base,exp);

	printf("%d^%d=%d",base,exp,result);
	return 0;
}
