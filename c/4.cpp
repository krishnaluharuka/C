#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,discriminant,root1,root2,realpart,imagpart;
	printf("enter the coefficient of a,b,c");
	scanf("%lf%lf%lf",&a,&b,&c);
	discriminant=(b*b)-(4*a*c);
	if(discriminant>0)
	{
		root1=(-b+sqrt(discriminant))/2*a;
		root2=(-b-sqrt(discriminant))/2*a;
		printf("root1=%lf\t,root 2=%lf",root1,root2);
		
	}
	else if (discriminant==0)
	{
		root1=root2=-b/(2*a);
		printf("the root is %lf",root1);
	}
	else 
	{
		realpart=-b/(2*a);
		imagpart=sqrt(-discriminant)/(2*a);
		printf("root1=%lf+%lf and root2=%lf+%lf",realpart,imagpart,realpart,imagpart);
	}
	return 0;
	
}
