#include<stdio.h>

main()
{
	//wap to find total leap year between given two number
	
	int a,b,c;
	
	printf("enter the value of a : ");
	scanf("%d",&a);
	printf("enter the value of b : ");
	scanf("%d",&b);
	
	c=b-a;
	c/=4;
	
	printf("%d",++c);
}
