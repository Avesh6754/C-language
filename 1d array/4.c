//WAP to find the sum of a 1D array.

#include<stdio.h>
#include<conio.h>

main()

{
	int n;
	
	printf("enter the size of array n :");
	scanf("%d",&n);
	
	int a[n];
	int i,sum=0;
	
	for(i=0;i<n;i++)
	{
		printf("enter the value of array [%d]",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
		
	}
    printf("sum = %d",sum);
		
}
