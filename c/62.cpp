#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	printf("enter a string");
	gets(str);
	int v=0,c=0,com=0,semi=0;
	int i;
	for(i=0;i<=strlen(str);i++)
	{
		if (str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
		v++;
		else if(str[i]>='a'&& str[i]<='z')
		c++;
		else if(str[i]==',')
		com++;
		else if(str[i]==';')
		semi++;
		
	}
	printf("the number of vowel in the text is %d",v);
	printf("the number of consonant in the text is %d",c);
	printf("the number of commas in the text is %d",com);
	printf("the number of semicolon in the text is %d",semi);
	return 0;
	
}

