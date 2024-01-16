#include<stdio.h>
#include<conio.h>

main()

{
//QWrite a Program to perform the addition operation of two 1D arrays & and store it in another array. Keep in mind that both array sizes must be the same.
	int n,i,sum=0;
	
	printf("entre the value of n :");
	scanf("%d",&n);
	
	int a[n],b[n],c[n];
	
	for(i=0;i<n;i++)
	{
		printf("entre the value of a[%d]",i);
		scanf("%d",&a[i]);
		printf("entre the value of b[%d]",i);
		scanf("%d",&b[i]);
		
		c[i]=a[i]+b[i];
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d",c[i]);
	}
	 
	    
	
}
