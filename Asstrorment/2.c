//5. Write a program in C to set the array in acending order.

#include<stdio.h>
main()
{
	int i,n,j,y;
	printf("Enter the size  : ");
	scanf("%d",&n);
	int a[n];
    for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(a[i] > a[j])
			{
				y = a[i];
				a[i] = a[j];
				a[j] = y;
			}
		}
	}
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
}
