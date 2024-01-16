#include<stdio.h>
main()
{
	int i,j,sum = 0;
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
			if (i==j)
			{
				sum = sum + a[i][j];
			}
		}
	}
	printf("sum diagonal elements is : %d",sum);
}
	
