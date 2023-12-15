#include<stdio.h>

main()

{
	int a=1,n;
	printf("enter the value of n ");
	scanf("%d",&n);
	
	for(a=1;n>=a;n-=2)
	{
		printf("%d ",n);
		
	}
}

