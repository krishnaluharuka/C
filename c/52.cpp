#include<stdio.h>
int main()
{
	int i,count=0;
	char sentence[50];
	printf("enter a sentence");
	gets(sentence);
	for(i=0;sentence[i]!='\0';i++)
	{
		if(sentence[i]==',')
		count++;
	}
	printf("the total number of comma in the given sentence is %d",count);
	return 0;
}
