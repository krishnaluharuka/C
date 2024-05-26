#include<stdio.h>
#include<string.h>
int main()
{
	char a[40];
	int i,len,vowel=0,cons=0;
	printf("enter a string\t");
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]=='a'||a[i]=='i'||a[i]=='e'||a[i]=='o'||a[i]=='u')
		vowel++;
		else
		cons++;
	}
	printf("the number of vowels in the string is:%d \n",vowel);
	printf("the number of consonant in the string is:%d",cons);
	return 0;	
}
