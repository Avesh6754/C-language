#include<stdio.h>

main()
{
	int a,i=1,sum=0;
	printf("enter the value of a : ");
	scanf("%d",&a);
	
	while(i<=a)
	{
		sum=sum+i;
		i++;
		
	
	}
	printf("%d",sum);
}

