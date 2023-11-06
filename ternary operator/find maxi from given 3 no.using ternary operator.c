#include<stdio.h>

main()

{
	//WAP to Find max< from given 3 no< u2ing ternary
//operator
	int a,b,c;
	
	printf("enter the value of a :");
	scanf("%d",&a);
	printf("enter the value of b :");
	scanf("%d",&b);
	printf("enter the value of c :");
	scanf("%d",&c);
	
	(a>b)?(a>c)?printf("a is maximum"):printf("c is maximum"):(b>c)?printf("b is maximum"):printf("c is maximum");
}
