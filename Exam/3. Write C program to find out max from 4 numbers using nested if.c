#include<stdio.h>

main()
{
	//3. Write C program to find out max from 4 numbers using nested if
	int a,b,c,d;
	
	printf("enter the value of a : ");
	scanf("%d",&a);
	printf("enter the value of b : ");
	scanf("%d",&b);
	printf("enter the value of c : ");
	scanf("%d",&c);
	printf("enter the value of d : ");
	scanf("%d",&d);
	
	if(a>b)
	{
		//a,c,d
		if(a>c)
		{
			//a,d
			if(a>d)
			{
				//a
				printf("a is maximum");
			}
			else
			{
				//d
				printf("d is maximum");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				printf("c is maximum");
			}
			else
			{
				printf("d is maximum");
			}
			
		}
	}
	else
	{
		//b,c,d
		if(b>c)
		{
			//b,d
			if(b>d)
			{
				//b
				printf("b is maximum");
			}
			else
			{
				//d
				printf("d is maximum");
			}
		}
		else
		{
			//c,d
			if(c>d)
			{
				printf("c is maximum");
			}
			else
			{
				printf("d is maximum");
			}
		}
		
		
	}
}
