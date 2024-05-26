#include<stdio.h>
#include<string.h>
int getlength(char []);
int main()
{
	char string[78];
	printf("enter a string");
	scanf("%s",string);
	printf("the length of string is %d",getlength(string));
	return 0;
}

int getlength(char string[])
{
	int len;
	len=strlen(string);
	return len;
}
