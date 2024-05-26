#include<stdio.h>
#include<string.h>
char string(char []);
int main()
{
	char str[8];
	printf("enter a string of length 7");
	scanf("%s",str);
	if(strlen(str)==7)
	{
		printf("the fourth element of the string is %c",string(str));
	}
	else 
	printf("error!enter a string of length 7");
	return 0;
}
char string(char str[])
{
    return str[3];
}



	
