//3. WAP to find the n number factorial without a loop. (using a goto statement).
//4. WAP to find the sum of n numbers using the goto statement.
//5. WAP to find the sum of prime numbers between 1 to 50 without using a loop.

#include<stdio.h>

main()

{
	int a=1,n;
	printf("enter the value of n : ");
	scanf("%d",&n);
	
	start:
		printf("%d * %d = %d\n",n,a,n*a);
		a++;
		
		if(a<=10)
		{
			goto start;
		}
	
}