#include<stdio.h>

int main()
{
	int count=0;
	FILE *fp;
	fp=fopen("hello.txt","r");
	char ch;
	while((ch=getc(fp))!=EOF)
	{
		if(ch!=' '&&ch!='\t'&&ch!='\n')
		count=count+1;
	}
	printf("the number of characters in the file is %d",count);
	return 0;
}
