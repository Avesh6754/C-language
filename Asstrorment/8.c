//1. WAP to get the array and count & remove all duplicate values in the array.
#include<stdio.h>
main()
{
	int i,j,n;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] == a[j])
			{
				a[j] = 0;
			}
		}
		if(a[i] != 0)
		{
			printf("%d ",a[i]);
		}
	}
}
