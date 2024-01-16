
#include<stdio.h>
main()
{
	int i,j,n,k;
	
	printf("Enter the number of n : ");
	scanf("%d",&n);
	
	printf("Enter the number of k : ");
	scanf("%d",&k);
	
	int a[n][k],sum = 0;
	for(i=0; i<n; i++)
	{
		for(j=0; j<k; j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	int max = a[0][0];
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
			if(max < a[i][j])
			{
				max = a[i][j];
			}
		}
	}
	
	printf(" maximum : %d",max);
	
}
