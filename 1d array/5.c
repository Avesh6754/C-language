#include<stdio.h>
#include<conio.h>

main()
//. WAP to print the multiplication table of each element of the array.
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
	
	for(i=0;i<n;i++)
	{
		for(j=1;j<=10;j++)
		{
			printf("%d * %d = %d\n",a[i],j,a[i]*j);
		}
		printf("\n");
	}
    
		
		
	
}
