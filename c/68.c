#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch,i,num;
	printf("enter a number\t");
	scanf("%d",&num);
	printf("enter 1 to check whether number is even or odd\n");
	printf("enter 2 to check whether number is prime or composite\n");
	printf("enter 3 to check whether number is exactly divisible by 5 and 7\n");
	printf("enter 4 to exit\n");
	printf("Enter your choice\t");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			
				if(num%2==0)
				printf("even");
				else
				{
				printf("odd");
			    }
				break;
			
			case 2:
					for(i=2;i<num;i++)
					{
						if(num%i==0)
						{
						printf("composite");
						break;
					    }
					}
					if(num==i)
					{
						printf("prime");
					}
						break;
				
				case 3:
					
					if(num%5==0&&num%7==0)
					printf("exactly divisible by 5 and 7");
					else 
					printf("not divisible");
					break;
			    	
			    	case 4:
			    		
			    			exit(0);
			    			break;
						
						default:
							
								printf("please enter choice from 1 to 4");
							
					
	}
	return 0;
}
