//3. Write C program to count number of digits in a number.

#include<stdio.h>
#include<conio.h>

main()
{
	int c=1,n,a;
	printf("entre the value of n :");
	scanf("%d",&n);
	while(n>0)
	{


		n/=10;
		a=c++;
		
	}
		printf("%d",a);
}
