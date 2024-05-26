#include<stdio.h>
#include<string.h>
struct studentss
{
     int roll;
	 char name[25];
	 char address[25];
	 int batch;	
}sd[200],temp;
int main()
{
	int i,n,j;
	printf("enter the number of data");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the roll,name,address,batch of the student");
		scanf("%d%s%s%d",&sd[i].roll,sd[i].name,sd[i].address,&sd[i].batch);
	}
	
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(sd[i].name,sd[j].name)>=1)
			{
				temp=sd[i];
				sd[i]=sd[j];
				sd[j]=temp;
			}
		}
	

    }
    
    
    for(i=0;i<n;i++)
    {
    
    	
    	
    	printf("%d\t%s\t%s\t%d\n",sd[i].roll,sd[i].name,sd[i].address,sd[i].batch);
        
	}

	
}
