#include<stdio.h>

main()
{
	int a,i=1;
	printf("enter the value of a : ");
	scanf("%d",&a);
	
	while(i<=a)
	{
		printf("%d ",i);
		i+=2;
	}
}

