#include<stdio.h>
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("characters.dat","w");
	printf("enter the characters");
	while(ch!='.')
	{
	ch=getchar();
	putc(ch,fp);
    }
    fclose(fp);
    fp=fopen("characters.dat","r");
    while(ch!=EOF)
    {
    	ch=getc(fp);
    	printf("%c\t",ch);
	}
	fclose(fp);
	return 0;
    
    
	
	
}
