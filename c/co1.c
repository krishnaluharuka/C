#include<stdio.h>
void main()
{
	int num,bin,dec=0,base=1,rem;
	printf("Enter a binary number with the combinations of 0s and 1s \n");
	scanf("%d",&num);
	bin=num;
	while(num>0)
	{
		rem=num%10;
		dec=dec+rem*base;
		num=num/10;
		base=base*2;
	}
	printf("The binary number is %d \n",bin);
	printf("The decimal number is %d \n",dec);
	return 0;
}
