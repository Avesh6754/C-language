//. wap to print reversed multplication table of given number.

#include<stdio.h>

main()

{
	int n,l=10;
	
	printf("enter the value of n : ");
	scanf("%d",&n);
	

	
		for(n;l>=1;l--)
		{
			printf("%d * %d = %d\n",n,l,n*l);
		}
		printf("\n");
	
}