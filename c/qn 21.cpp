#include<stdio.h>
int main()
{
	int elements[10],i;
	for(i=0;i<10;i++)
	{
		printf("enter the value of the element");
		scanf("%d",&elements[i]);
		
	}
	for(i=0;i<10;i++)
	{
	
	printf("value is %d and address is %d\n",elements[i],&elements[i]);
}
	return 0;
	
	
}
