//wap to check number is palindrom or not.

#include<stdio.h>

main()

{
	int n,a,r=0,c;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	c=n;
	for(n;n>0;)
	{	
		a=n%10;
		r=r*10+a;
		n/=10;
		
		
		
	}
	if(c==r)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
}