#include<stdio.h>

main()
{
	//2. find maximum from 3 number using ladder.
	
	int a,b,c;
	
	printf("enter the value of a : ");
	scanf("%d",&a);
	printf("enter the value of b : ");
	scanf("%d",&b);
	printf("enter the value of c : ");
	scanf("%d",&c);
	
	if(a>b && a>c)
	{
		printf("a is maximum");
	}
	else if(b>a && b>c)
	{
		printf("b is maximum");
	}
	else
	{
		printf("c is maximum");
	}
	
}
