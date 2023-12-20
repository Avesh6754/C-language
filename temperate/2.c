// wap to find sum of even number between 1 to 28

#include<stdio.h>

main()

{
	int n,sum=0;
	
	for(n=1;n<=28;n++)
	{
		if(n%2==0)
		{
			sum=sum+n;
        printf("%d ",n);
		}
	}
	printf("\nsum = %d",sum);
}