#include<stdio.h>
struct studentss
{
     int roll;
	 char name[25];
	 char address[25];
	 int batch;	
}sd[200],temp;
int main()
{
	int i,n;
	printf("enter the number of data");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the roll,name,address,batch of the student");
		scanf("%d%s%s%d",&sd[i].roll,sd[i].name,sd[i].address,&sd[i].batch);
	}
	FILE *fp;
	fp=fopen("Student.dat","w");
	for(i=0;i<n;i++)
	{
	
	fprintf(fp,"%d\t%s\t%s\t%d\n",sd[i].roll,sd[i].name,sd[i].address,sd[i].batch);
    }
    fclose(fp);
    fp=fopen("Student.dat","r");
    for(i=0;i<n;i++)
    {
    	fscanf(fp,"%d%s%s%d",&sd[i].roll,sd[i].name,sd[i].address,&sd[i].batch);
    	if(sd[i].batch==2016)
    	{
    	printf("%d\t%s\t%s\t%d\n",sd[i].roll,sd[i].name,sd[i].address,sd[i].batch);
        }
	}
	fclose(fp);
	
}
