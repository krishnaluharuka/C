#include<stdio.h>
#include<string.h>
int main()
{
	char string[67];
	printf("enter a string");
	gets(string);
	for(int i=0;i<=strlen(string);i++)
	{
	
	if(string[i]>=65&&string[i]<=90)
	{
	
	string[i]=string[i]+32;
}
	else if(string[i]>=97&&string[i]<=122)
	{
	
	string[i]=string[i]-32;
}}
printf("%s",string);
return 0;
}
