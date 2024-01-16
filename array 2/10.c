#include<stdio.h>
main()
{
	int i,j,n,k,sum = 0;
	printf("Enter the number of n : ");
	scanf("%d",&n);
	
	printf("Enter the number of k : ");
	scanf("%d",&k);
	int a[n][k];
	
	for(i=0; i<n; i++)
	{
		for(j=0; j<k; j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			sum = sum + a[i][j];
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
	printf("sum of 2D array is : %d",sum);
}
