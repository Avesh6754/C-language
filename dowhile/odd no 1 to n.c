#include<stdio.h>

main()

{
	int a=1,b;
	
	printf("enter the value of b : ");
	scanf("%d",&b);
	
	do
	{
		printf("%d ",a);
		a+=2;
	}
	while(a<=b);
}