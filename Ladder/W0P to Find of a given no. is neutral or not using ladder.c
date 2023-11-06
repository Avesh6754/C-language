#include<stdio.h>

main()

{
	int a;
	
	printf("enter the value of a :");
	scanf("%d",&a);
	
	if(a>0)
	{
		printf("you enter positive number");
	}
	else if(a<0)
	{
		printf("you enter negative number");
	}
	else
	{
		printf("you enter neutral number");
	}
}
