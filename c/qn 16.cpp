#include<stdio.h>
#include<string.h>
int main()
{
	char name[50][50],temp[50];
	int n,i,j;
	printf("enter the number of students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the name of the person");
		scanf("%s",name[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
				strcpy(name[j],temp);				
			}
		}
	}
		for(i=0;i<n;i++)
		{
			printf("%s\n",name[i]);
			}
			return 0;	
}
