#include<stdio.h>
int main()
{
    int i;
    char phone[10];
	char name[25];
	FILE *fp;
	fp=fopen("people.dat","w");
	for(i=0;i<10;i++)
	{
	printf("enter the name and phone number of the person");
	scanf("%s%s",name,phone);
	fprintf(fp,"%s\t%s\n",name,phone);
    }
    fclose(fp);
    fp=fopen("people.dat","r");
    printf("name\tphone\n");
    for(i=0;i<10;i++)
	{
	fscanf(fp,"%s\t%s\n",name,phone);
	printf("%s\t%s\n",name,phone);
    }
    fclose(fp);
    return 0;
    
    
    
}
