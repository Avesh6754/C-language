#include<stdio.h>

main()

{
		//WAP to Find max< from given 4 no< using nested
//operator
	int a,b,c,d;
	
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	printf("enter the value of c :");
	scanf("%d",&c);
	printf("enter the value of d :");
	scanf("%d",&d);
	
	if(a>d)
	{
		//a,c,d
		if(a>c)
		{
			//a,d
			if(a>d)
			{
			    //d
				printf("a is maximum");	
			}
			else
			{
				printf("d is maximum");
			}
		}
		else
		{
			//cd
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
				
				printf("b is maximum");
			}
			else
			{
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
