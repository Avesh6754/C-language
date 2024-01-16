#include<stdio.h>
main()
{
	int i,j,n,k;
	
	printf("Enter the number of n : ");
	scanf("%d",&n);
	
	printf("Enter the number of k : ");
	scanf("%d",&k);
	
	int a[n][k],b[n][k],c[n][k];
	for(i=0; i<n; i++)
	{
		for(j=0; j<k; j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<k; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<k; j++)
		{
			printf("Enter the value of b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<k; j++)
		{
			printf("%d ",b[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<k; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<k; j++)
		{
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
