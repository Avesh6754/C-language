#include<stdio.h>
#include<conio.h>
void cube()
{
	int n,sum=0;
	printf("enter the value of n : ");
	scanf("%d",&n);
	
	sum=n*n*n;
	
	printf("Sum = %d",sum);
}

main()

{
	cube();
}