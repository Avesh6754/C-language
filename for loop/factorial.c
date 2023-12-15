#include<stdio.h>

main()
{
	int a,n,sum=1;
	
	printf("enter the value of n :");
	scanf("%d",&n);
	
	for(a=1;n>=a;n--)
	{
		sum=sum*n;
		
	}
	printf("%d",sum);
}