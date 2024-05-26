#include<stdio.h>

int main()
{
	char text[50];
	FILE *fp;
	fp=fopen("hello.txt","w");
	printf("enter a text");
	gets(text);
	fprintf(fp,"%s",text);
	fclose(fp);
	
	return 0;
}
