#include<stdio.h>

main()

{
	int a=1,n,sum=0;
	
	printf("enter the value of n : ");
	scanf("%d",&n);
	
	do
	{
	     sum=sum+a;
		  a++;	 	
	}
	while(a<=n);
	printf("%d",sum);
}