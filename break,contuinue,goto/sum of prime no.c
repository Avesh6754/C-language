//5. WAP to find the sum of prime numbers between 1 to 50 without using a loop.

#include<stdio.h>

main()

{
	int a=1,n=10,sum=0;
	
	
	start:
		
		if(n % a == 0)
		{
		
			sum = sum + a;
		}
		a++;
		
		
		if(a<=n)
		{
			goto start;
		}
		printf("Ans = %d",sum-1);
	
	
}