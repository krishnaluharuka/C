#include<stdio.h>
int main()
{
	int sec,min,s,hr,x;
	printf("enter the time in second");
	scanf("%d",&sec);
	if(sec<60)
	{
	
	printf("time=0hr.0min.%d",sec);
    }
    else if(sec>60&&sec<3600)
    {
    	min=sec/60;
    	s=sec%60;
    	printf("time:0.%d.%d",min,s);
	}
	else
	{
		hr=sec/3600;
		x=sec%3600;
		min=x/60;
		s=x%60;
		printf("time:%d.%d.%d",hr,min,s);
	}
	return 0;
	
	
}
