//3 Write a Program to find square of each element from the given array.

#include<stdio.h>

main()

{
	int n;
	printf("enter the size of array n : ");
	scanf("%d",&n);
	
	int a[n],i,sum[n];
	
	for(i=0;i<n;i++)
	{
		printf("enter the value of a[%d] ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum[i]=a[i]*a[i];
	}
	for(i=0;i<n;i++)
	{
		printf("%d",sum[i]);
	}
	
	
	
}