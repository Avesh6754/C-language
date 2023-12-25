#include<stdio.h>
#include<conio.h>

main()
//. 6. Write a program in C to copy the elements of one array into another array
{
	int n;
	
	printf("enter the size of array n :");
	scanf("%d",&n);
	
	int a[n],b[n];
	int i,j,sum=0;
	
	for(i=0;i<n;i++)
	{
		printf("enter the value of array [%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		printf(" a[i] = %d \n",a[i]);
		b[i]=a[i];
	}
	printf("\n");
	for(i=0;i<5;i++)
	{
		printf(" b[i] = %d \n",b[i]);
	}
	
	
	
	
    
		
		
	
}
