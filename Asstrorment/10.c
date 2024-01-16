#include<stdio.h>
main()
{
	int i,n,j,temp,t;
	
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
	printf("\n\nEnter the targeted value : ");
	scanf("%d",&t);
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] + a[j] == t)
			{
				printf("(%d , %d) ",a[i],a[j]);
			}
		}
	}
}
