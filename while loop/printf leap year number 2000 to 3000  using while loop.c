#include<stdio.h>

main()
{
	int a,i;
	printf("enter the value of i : ");
	scanf("%d",&i);
	printf("enter the value of a : ");
	scanf("%d",&a);
	
	
	while(i<=a)
	{
		printf("%d ",i);
		i+=4;
	}
}

