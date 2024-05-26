#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,r,num,result=0,count=0;
	printf("enter the intervals");
	scanf("%d%d",&a,&b);
	printf("the armstrong numbers between %d and %d are:",a,b);
	for(i=a+1;i<b;i++)
	{
		num=i;
		while(num!=0)
		{
		
			num=num/10;
			count++;
		}
		num=i;
		while(num!=0)
		{
			r=num%10;
			result=result+pow(r,count);
			num=num/10;
		}
		if(i==result)
		{
		printf("%d\t",i);
        }
        result=0;
		count=0;
	}
	return 0;
}
