#include<stdio.h>
main()
{
	int n,first,last,ans,year,i,x=0;
	
	printf("Enter the first year : ");
	scanf("%d",&first);
	
	printf("Enter the last year : ");
	scanf("%d",&last);
	
	ans = last - first;
	year = (ans / 4) + 1;
	
	int leap_year[year];
	
	for(i=first; i<=last; i++)
	{
		if(i % 4 == 0)
		{
			leap_year[x] = i;
			x++;
		}
	}
	
	for(i=0; i<x; i++)
	{
		printf("%d ",leap_year[i]);
	}

}
