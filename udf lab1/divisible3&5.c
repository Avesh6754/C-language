#include<stdio.h>
#include<conio.h>
void cube()
{
	int n;
	printf("enter the value of n : ");
	scanf("%d",&n);
	
     if(n%3==0 && n%5==0)
     {
     	printf("divisible by 3 & 5");
	 }
	 else
	 {
	 	printf("not divisible by 3 & 5");
	 }
}

main()

{
	cube();
}