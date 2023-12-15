#include<stdio.h>

main()

{
	int a,b=1;
	
	printf("enter the value of b : ");
	scanf("%d",&a);
	
	do
	{
		printf("%d ",a);
		a-=2;
	}
	while(a>=b);
}