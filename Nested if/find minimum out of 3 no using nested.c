#include<stdio.h>

main()

{
			//WAP to Find min from given 3 no< using nested
//operator
	int a,b,c;
	
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	printf("enter the value of c :");
	scanf("%d",&c);
	
	if(a<b)
	{
		//a,c
		if(a<c)
		{
			//a
			printf("a is minimum");
		}
		else
		{
			//c
				printf("c is minimum");
		}
	}
	else
	{
		//b,c
		if(b<c)
		{
			//b
			printf("b is minimum");	
		}
		else
		{
			//c
				printf("c is minimum");
		}
		
	}
}
	
