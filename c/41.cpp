/*Qn 2.Write a program that takes an integer number from user and displays message "welcome" if the
 the given integer number is of four digits only otherwise displays rejected*/
 #include<stdio.h> 
 int main()
 {
 	int n,count=0;
 	printf("enter a four digit number if u want to see the display of welcome");
 	scanf("%d",&n);
 	while(n!=0)
 	{
	n=n/10;
 	count++;
    }
    if(count==4)
    {
    	printf("WELCOME");
	}
	else
	printf("Rejected");
	return 0;
 }

