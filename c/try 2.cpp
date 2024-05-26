#include<stdio.h>
int main()
{
	int age,i,count;
	for(i=0;i<10;i++)
	{
		printf("enter the age of person");
		scanf("%d",&age);
		if(age>50&&age<60)
		count++;
	}
	printf("the number of people of age between 50 to 60 is %d",count++);
	return 0;
}
