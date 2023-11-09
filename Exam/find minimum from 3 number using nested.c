#include<stdio.h>

main()

{
	//find minimum from 3 number using nested.
	int a,b,c;
	printf("enter the value of a : ");
	scanf("%d",&a);
	printf("enter the value of b : ");
	scanf("%d",&b);
	printf("enter the value of c : ");
	scanf("%d",&c);
	
	if(a<b)
	{
		//a,c
		if(a<c)
		{
			printf("a is mnimum");
		}
		else
		{
			printf("c is minimum");
		}
	}
	else
	{
		//b,c
		if(b<c)
		{
			printf("b is minimum");
		}
		else
		{
			printf("c is minimum");
		}
					
						
	}

}
