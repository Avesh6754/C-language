#include<stdio.h>
#include<conio.h>

main()
//. 5. Write a program in C to read n number of values in an array and display them in reverse order
{
	int n;
	
	printf("enter the size of array n :");
	scanf("%d",&n);
	
	int a[n];
	int i,j,sum=0;
	
	for(i=0;i<n;i++)
	{
		printf("enter the value of array [%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
    
	
}
