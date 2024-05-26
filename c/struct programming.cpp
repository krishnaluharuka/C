#include<stdio.h>
struct book
{
	int id,price;
	char name[100];
}b[3];
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		
	printf("enter book id\n",i+1);
	scanf("%d",&b[i].id);
	printf("enter the price\n",i+1);
	scanf("%d",&b[i].price);
	printf("enter the name\n",i+1);
	scanf("%s",b[i].name);
    }
    for(i=0;i<3;i++)
    {
	printf("book%d id=%d\n",i+1,b[i].id);
	printf("book%d price=%d\n",i+1,b[i].price);
	printf("book %dname=%s\n",i+1,b[i].name);
    }
	return 0;
}
