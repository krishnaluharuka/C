#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	printf("enter a string");
	gets(a);
	strcpy(b,a);
	strrev(a);
	if(strcmp(a,b)==0)
	{
		printf("palindrome");
	}
	else
	{
	printf("not palindrome");
    }
    return 0;
	
}
