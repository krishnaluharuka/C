#include<stdio.h>
#include<string.h>
int main()
{
	int len;
	char str[200];
	printf("enter a string");
	gets(str);
	len=strlen(str);
	printf("the length of the string is %d",len);
	return 0;
}
