#include<stdio.h>
#include<string.h>
int string(char []);
int main()
{
	char str[50];
	printf("enter a string");
	gets(str);
	printf("the number of word in the text is %d",string(str));
	return 0;
	
}
int string(char str[])
{
	int count=0;
	int i;
	for(i=0;i<=strlen(str);i++)
	{
		if (str[i]==' '||str[i]=='\t')
		count++;
	}
	return count;
}
