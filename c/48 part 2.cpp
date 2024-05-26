#include<stdio.h>
int main()
{
	int i;
	char words[20];
	FILE *fp;
	fp=fopen("some.txt","r");
	for(i=0;i<10;i++)
	{
	
	
    fscanf(fp,"%s",words);
    printf("%s\n",words);
	}
    
}
