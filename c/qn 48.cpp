#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50],s2[20];
	int ch;
	printf(" enter any two strings\n");
	scanf("%s%s",s1,s2);
	printf("enter 1 for use of strcpy\n");
	printf("enter 2 for strrev\n");
	printf("enter 3 for strcat\n ");
	printf("enter 4 for strlen\n");
	printf("enter 5 for strcmp\n");
	printf("enter your choice");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
    strcpy(s1,s2);
	printf("the copied version of string is %s",s1);
	break;
	case 2:
		strrev(s1);
		printf("the reverse of string 1 is %s",s1);
		break;
		case 3:
			strcat(s1,s2);
			printf("the concatenation of s1 and s2 is %s",s1);
			break;
			case 4:
				int len;
				len=strlen(s1);
				printf("the length of s1 is %d",len);
				break;
				case 5:
					int y;
					y=strcmp(s1,s2);
					if(y==0)
				    printf("both string are equal");
				    else if(y==-1)
				    printf("s1 comes first then comes s2");
				    else
				    printf("s2 comes first then comes s1");
				    break;
				    default:
				    	printf("ERROR!! Please enter yr choice from 1 to 5");
		
}
	return 0;
}

