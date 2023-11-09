#include<stdio.h>

main()
{
	//1. find maximum from 3 number using nested
	int a,b,c;
	printf("enter the value of a : ");
	scanf("%d",&a);
	printf("enter the value of b : ");
	scanf("%d",&b);
	printf("enter the value of c : ");
	scanf("%d",&c);
	
	if(a>b)
	{
		//a,c
		if(a>c)
		{
			printf("a is maximum");
		}
		else
		{
			printf("c is maximum");
		}
	}
	else
	{
		//b,c
		if(b>c)
		{
			printf("b is maximum");
		}
		else
		{
			printf("c is maximum");
		}
					
						
	}
}
