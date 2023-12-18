//4. Write C program to find sum of first and last digit of a number.

#include<stdio.h>
#include<conio.h>

main()
{
	int n,a;
	
	printf("entre the value of n :");
	scanf("%d",&n);
	int d=n%10;
	while(n>0)
	{

                a=n;
		n/=10;
		
		
		
	}
	printf("%d + %d = %d",a,d,a+d);
}
