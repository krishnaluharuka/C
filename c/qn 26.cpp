#include<stdio.h>
int main()
{

	FILE *fp;
	char ch;
	printf("enter a character");
	fp=fopen("character.dat","w");
	
	while(ch=getchar()!=EOF)
	putc(ch,fp);
	fclose(fp);
	fp=fopen("character.dat","r");
	while(ch=getc(fp)!=EOF)
	printf("%c",ch);
	return 0;	
	
	
}
