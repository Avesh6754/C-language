//4 Write a Program to print and find the sum of all boundary elements from a given 5x5 2D array.
#include<stdio.h>
main()
{
	int i,j,sum=0;
	
	int a[5][5];
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("Enter the value of a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0; i<5; i++)
	{
		for(j=0; j<5; j++)
		{
			if(i==0 || i==4 || j==0 || j==4)
			{
				printf("%d ",a[i][j]);
				sum = sum + a[i][j];
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	printf("sum of boundary elements  : %d",sum);

}
	
