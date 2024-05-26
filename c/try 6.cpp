#include<stdio.h>
#include<string.h>
int main()
{
	char x[50];
	int i,count=0;
	printf("enter a sentence");
	gets(x);
	for(i=0;x[i];i++)
	{
		if(x[i]==',')
		{
			count++;
		}
	}
	printf("the total number of commas is %d",count);
	return 0;
}
