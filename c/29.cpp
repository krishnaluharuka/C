#include<stdio.h>
int main()
{
	int a,b,ch;
	printf("enter any two numbers\t");
	scanf("%d%d",&a,&b);
	printf("press 1 for addition\n");
	printf("press 2 for subtraction\n");
	printf("press 3 for multiplication\n");
	printf("press 4 for division\n\n");
	printf("enter your choice\t");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("%d+%d=%d",a,b,a+b);
			break;
			case 2:
				printf("%d-%d=%d",a,b,a-b);
				break;
				case 3:
				printf("%d*%d=%d",a,b,a*b);
				break;
				case 4:
					printf("%d/%d=%d",a,b,a/b);
					break;
					default:
						printf("ERROR! Please enter your choice from 1 to 4");
						
	}
	return 0;
}
