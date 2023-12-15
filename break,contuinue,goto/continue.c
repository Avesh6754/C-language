//2. WAP to demonstrate the use of continue keyword.
//3. WAP to find the n number factorial without a loop. (using a goto statement).
//4. WAP to find the sum of n numbers using the goto statement.
//5. WAP to find the sum of prime numbers between 1 to 50 without using a loop.

#include<stdio.h>

main()

{
	int a,n;
	printf("enter the value of n : ");
	scanf("%d",&n);
	
	for(a=1;a<=n;a++)
	{
		if(a==5)
		{
			continue;
		}
		printf("%d ",a);
	}
}