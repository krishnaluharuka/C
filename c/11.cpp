#include<stdio.h>
int main()
{
	int i;
	float f;
	double d;
	char c;
	printf("the size of int is %zu bytes",sizeof(i));
    printf("the size of float is %zu bytes",sizeof(f));
	printf("the size of double  is %zu bytes",sizeof(d));
	printf("the size of char is %zu bytes",sizeof(c));
	return 0;	
}
