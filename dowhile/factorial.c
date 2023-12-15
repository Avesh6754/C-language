#include<stdio.h>

main()

{
	int a,n=1,sum=1;
	
	printf("enter the value of n : ");
	scanf("%d",&a);
	
	do
	{
	     sum=sum*a;
		  a--;	 	
	}
	while(a>=n);
	printf("%d",sum);
}