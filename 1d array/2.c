#include<stdio.h>
#include<conio.h>

main()

{
//Q.2 Write a Program to find the average of a 1D array.
	int n,i,sum=0;
	
	printf("entre the value of n :");
	scanf("%d",&n);
	
	int a[n];
	
	for(i=0;i<n;i++)
	{
		printf("entre the value of a[%d]",i);
		scanf("%d",&a[i]);
		
		sum=sum+a[i];
	}
	 int j;
	   j=sum/n;
	   printf("%d",j);
	    
	
	

	
	
	
	
}