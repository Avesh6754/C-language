#include<stdio.h>
main()
{
	int n,k,i,j,sum=0;
	
	printf("Enter the size of n : ");
	scanf("%d",&n);
	
	printf("Enter the size of k : ");
	scanf("%d",&k);
	
	int a[n][k];
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
			printf("%d  ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<n; i++)
	{
		for(j=0; j<k; j++)
		{
			if(i == j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("diagonal elements is : %d",sum);
}
