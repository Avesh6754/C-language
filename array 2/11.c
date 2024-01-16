#include<stdio.h>

main()
{
	int n,i;
	
	printf("Enter the size of first array : ");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]*a[i]);
	}
	
}
