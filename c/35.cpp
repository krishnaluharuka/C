#include<stdio.h>
int prime(int);
int main()
{
	int a,b,i,result;
	printf("enter the interval ");
	scanf("%d%d",&a,&b);
    for(i=a;i<b;i++)
	{
	result=prime(i);
	if(result==1)
	printf("%d\t",i);	
	}
	return 0;
}
int prime(int i)
{
    int j,result=1;
	for(j=2;j<i;j++)
		{
		if(i%j==0)
		{
		
		result=0;
		
		break;
	    }
	    else
	    result=1;
		}
		return result;
}
		
