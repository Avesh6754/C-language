#include<stdio.h>

main()

{
	int n,sum=1;
	printf("enter the value of n: ");
	scanf("%d",&n);
	
	while(n>=1)
	{
		sum=sum*n;
		n--;
	}
	printf("sum = %d",sum);
}