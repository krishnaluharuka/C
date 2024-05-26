#include<stdio.h>
#include<string.h>
int main()
{
	char name[50][50],temp[50],address[50][50],temp1[50];
	int i,j;
	for(i=0;i<10;i++)
	{
		printf("enter the name of the person");
		scanf("%s",name[i]);
		printf("enter the address of the person");
		scanf("%s",address[i]);
		
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(strcmp(name[i],name[j])>0)
			{
				strcpy(temp,name[i]);
                strcpy(name[i],name[j]);
				strcpy(name[j],temp);
				strcpy(temp1,address[i]);
                strcpy(address[i],address[j]);
				strcpy(address[j],temp1);				
			}
		}
	}
		for(i=0;i<10;i++)
		{
			printf("%s\t",name[i]);
			printf("%s\n",address[i]);
			
			}
			return 0;	
}
