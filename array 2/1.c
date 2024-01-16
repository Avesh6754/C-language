#include<stdio.h>
main()
{
	int i,n=5,j,t;
	int a[5];
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
			if(a[i] > a[j])
			{
				t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	}	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}

}
