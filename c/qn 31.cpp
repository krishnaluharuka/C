#include<stdio.h>
int main()
{
    int i;
    int marks[10],roll[10];
	char name[10][25];
	FILE *fp;
	fp=fopen("std.dat","r");
    printf("name\trollno\tmarks\n");
    for(i=0;i<10;i++)
	{
	fscanf(fp,"%s\t%d\t%d\n",name[i],&roll[i],&marks[i]);
	printf("%s\t%d\t%d\n",name[i],roll[i],marks[i]);
    }
    fclose(fp);
    return 0;
}
