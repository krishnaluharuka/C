#include<stdio.h>
int main()
{
	int yr;
	printf("enter the year");
	scanf("%d",&yr);
	if(yr%400==0||(yr%4==0&&yr%100!=0))
	printf("%d ia a leap year",yr);
	
	else
	printf("%d is not a leap year",yr);
	return 0;
}
