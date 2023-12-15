#include<stdio.h>

main()

{
	int a,b=1;
	
	printf("enter the value of b : ");
	scanf("%d",&a);
	
	do
	{
		printf("%d ",a);
		a--;
	}
	while(a>=b);
}