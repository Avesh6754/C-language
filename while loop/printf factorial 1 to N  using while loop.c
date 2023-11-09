#include<stdio.h>

main()
{
	int a=1,i,sum=1;
	printf("enter the value of i : ");
	scanf("%d",&i);
	
	while(i>=a)
	{
		sum=sum*i;
		i--;
		
	
	}
	printf("%d",sum);
}

