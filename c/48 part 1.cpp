#include<stdio.h>
int main()
{
	int i;
	char words[20];
	FILE *fp;
	fp=fopen("some.txt","w");
	for(i=0;i<20;i++)
	{
	
	printf("enter a word");
	scanf("%s",words);
    fprintf(fp,"%s\n",words);
	}
    
}
