//wap to reverse number of given number.

#include<stdio.h>

main()
{
	int a;
	printf("enter the value of a" );
	scanf("%d",&a);
	
	int r=0;
	
	while(a>0)
	{
	
	  r=r*10+(a%10);
	  a=a/10;
	
	
    }
    printf("%d",r);
}