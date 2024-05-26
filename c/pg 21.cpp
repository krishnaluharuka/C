/* A program to write n persons name, address and tel no. in a data file and display them
reading the successive data from the file in proper format*/
#include<stdio.h>
int main()
{
	int i,n;
	char name[20];
	char address[50];
	char telno[10];
	FILE *fptr;
	fptr=fopen("rec.dat","w");
	printf("enter how many persons record would you like to enter");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter the name, address and telephone number");
		scanf("%s",name);
		scanf("%s",address);
		scanf("%s",telno);
		fprintf(fptr,"%s\t%s\t%s\n",name,address,telno);
	}
	fclose(fptr);
	fptr=fopen("rec.dat","r");
	printf("Name\tAddress\tTelno\n");
	while(fscanf(fptr,"%s%s%s",name,address,telno)!=EOF)
	{
		printf("%s\t%s\t%s\n",name,address,telno);
	}
	fclose(fptr);
	
}
