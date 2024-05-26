#include<stdio.h>
int main()
{
	int n,i,count=0;
	printf("enter the salary of 5 employees");
	for(i=0;i<5;i++)
	{
	scanf("%d",&n);
	if (n>=20000&&n<=30000)
	{
		count++;
	}
    }
    printf("the employees having salary between 20000 to 30000 is %d",count);
    return 0;
    
	
}
