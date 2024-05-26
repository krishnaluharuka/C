#include<stdio.h>
int main()
{
	int i,j;
	for(i='a';i<='d';i++)
	{
		for(j='a';j<=i;j++)
		{
			
			if(i=='d')
			{
		    printf("%c",i+1);
		    }
		    else
		    {
		    	printf("%c",i);
			}
		}
		printf("\n");
	}
	return 0;
}
