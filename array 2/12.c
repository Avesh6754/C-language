#include<stdio.h>

main()
{
	int n1,n2,i;
	
	printf("Enter the size of first array : ");
	scanf("%d",&n1);
	
	printf("Enter the size of second array : ");
	scanf("%d",&n2);
	
	int a[n1],b[n2],c[n1+n2];
	for(i=0; i<n1; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	for(i=0; i<n2; i++)
	{
		printf("Enter the value of a[%d] : ",i);
		scanf("%d",&b[i]);
	}
	
	for(i=0; i<n1; i++)
	{
		c[i] = a[i];
	}
	
	for(i=0; i<n2; i++)
	{
		c[n1 + i] = b[i];
	}
	for(i=0; i<n1+n2; i++)
	{
		printf("%d ",c[i]);
	}
	
}
