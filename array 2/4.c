#include<stdio.h>
main()
{
	int n,i;
	
	printf("Enter the size of array : ");
	scanf("%d",&n);
	
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	int mini=a[0];
	
	for(i=0; i<n; i++)
	{
		if(mini > a[i])
		{
			mini = a[i];
		}
	}
	printf(" mini: %d",mini);
}
