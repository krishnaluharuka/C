#include<stdio.h>
int main()
{
	FILE *fp;
	rename("jaihanuman.txt","std.txt");
	remove("std.txt");
	return 0;
	
}
