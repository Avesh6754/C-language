#include<stdio.h>

main()
{
	char a;
	
	printf("enter the value of a :");
	scanf(" %c",&a);
	
	if(a=='M')
	{
		printf("Monday");
	}
	else if(a=='T')
	{
		printf("Tuesday");
	}
	else if(a=='W')
	{
		printf("Wednesday");
	}
	else if(a=='T')
	{
		printf("Thursday");
	}
	else if(a=='F')
	{
		printf("Firday");
	}
	else if(a=='s')
	{
		printf("Saturday");
	}
	else if(a=='S')
	{
		printf("Sunday");
	}
	else
	{
		printf("entre the M,T,W,t,F,s,S");
	}
}
