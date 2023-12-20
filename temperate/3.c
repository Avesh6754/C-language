// wap to find factorial of 3 using while loop. 

#include<stdio.h>

main()

{
	int n=3,sum=1;
	
	while(n>=1)
	{
		sum=sum*n;
		n--;
	}
	printf("sum = %d",sum);
}