#include<stdio.h>
struct hotel
{
	char name[25];
	char address[30];
	int charge;
	int number;
}hot[10];
int main()
{
	int i;
	FILE *fp;
	fp=fopen("hotel.dat","w");
	
	for(i=0;i<3;i++)
	{
		printf("enter the name of hotel");
		scanf("%s",hot[i].name);
		printf("enter the address of the hotel");
		scanf("%s",hot[i].address);
		printf("enter the average charge of room");
		scanf("%d",&hot[i].charge);
		printf("enter the number of rooms");
		scanf("%d",&hot[i].number);
		fprintf(fp,"%s\t%s\t%d\t%d\n",hot[i].name,hot[i].address,hot[i].charge,hot[i].number);
	}
	fclose(fp);
	fp=fopen("hotel.dat","r");
	printf("Nameofthehotel\tAddressofthehotel\taveragechargeofaroom\tnumberofroomsavailable\n");
	for(i=0;i<3;i++)
	{
	
	     fscanf(fp,"%s%s%d%d",hot[i].name,hot[i].address,&hot[i].charge,&hot[i].number);
		
			if(hot[i].number>5)
			{
				printf("%s\t%s\t%d\t%d\n",hot[i].name,hot[i].address,hot[i].charge,hot[i].number);
			}
	}
	fclose(fp);
	return 0;
	}

