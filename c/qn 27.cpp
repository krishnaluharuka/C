#include<stdio.h>
int main()
{
    int i;
    char address[25];
    char phone[10];
	char name[25];
	FILE *fp;
	fp=fopen("std.dat","w");
	for(i=0;i<4;i++)
	{
	printf("enter the name,address and phone number of the student");
	scanf("%s%s%s",name,address,phone);
	fprintf(fp,"%s\t%s\t%s\n",name,address,phone);
    }
    fclose(fp);
    fp=fopen("std.dat","r");
    printf("name\taddress\tphone\n");
    for(i=0;i<4;i++)
	{
	fscanf(fp,"%s\t%s\t%s\n",name,address,phone);
	printf("%s\t%s\t%s\n",name,address,aphone);
    }
    fclose(fp);
    return 0;
    
    
    
}
