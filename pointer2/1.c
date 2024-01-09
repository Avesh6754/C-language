#include<stdio.h>

main()
{
	int i,a[5];
	for(i=0;i<5;i++)
	{
		printf("enter the value of a[%d]",i);
		scanf("%d",&a[i]);
	}
	int *ptr;
	for(i=0;i<5;i++)
	{
		ptr=&a[i];
		printf("%d\n",*ptr*a[i]);
	}
	
	
}
