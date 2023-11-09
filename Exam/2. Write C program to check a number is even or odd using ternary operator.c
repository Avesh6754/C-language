#include<stdio.h>

main()

{
	//2. Write C program to check a number is even or odd using ternary operator.
	
	int a;
	printf("enter the value of a :");
	scanf("%d",&a);
	
	(a%2==0)?printf("even number"):printf("odd number");
}
