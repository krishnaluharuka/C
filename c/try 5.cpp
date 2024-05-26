#include<stdio.h>
#include<string.h>
int main()
{
	char sentence[50];
	int count,len;
	printf("enter a sentence");
	gets(sentence);
	len=strlen(sentence);
	int i;
	i=0;
	while(i!='\0')
	{
		if (sentence[i]=',')
		count++;
	}
	printf("the number of commas is %d",count);
	return 0;
}
