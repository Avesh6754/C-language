//4. WAP to find the sum of n numbers using the goto statement.
//5. WAP to find the sum of prime numbers between 1 to 50 without using a loop.

#include<stdio.h>

main()

{
	int a=1,n,sum=0;
	printf("enter the value of n : ");
	scanf("%d",&n);
	
	start:
		
		sum=sum+a;
		a++;
		
		
		
		if(a<=n)
		{
			goto start;
		}
		printf("%d ",sum);
	
}