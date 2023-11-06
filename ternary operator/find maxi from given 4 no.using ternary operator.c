#include<stdio.h>

main()

{
	//WAP to Find max< from given 4 no< u2ing ternary
//operator
	int a,b,c,d;
	
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	printf("enter the value of c :");
	scanf("%d",&c);
	printf("enter the value of d :");
	scanf("%d",&d);
	
	(a>b)?(a>c)?(a>d)?printf("a is maximum"):printf("d is maximum"):(c>d)?printf("c is maximum"):printf("d is maximum"):(b>c)?(b>d)?printf("b is maximum"):printf("d is maximum"):(c>d)?printf("c is maximum"):printf("d is maximum");
}
