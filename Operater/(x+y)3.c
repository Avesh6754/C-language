#include<stdio.h>

main()

{
	int x,y,ans;
	
	printf("enter the value of x : ");
	scanf("%d",&x);
	printf("enter the value of y : ");
	scanf("%d",&y);
	//x³+3x²y+3xy²+y³
	ans=(x*x*x)+(3*x*x*y)+(3*x*y*y)+(y*y*y);
	printf("%d",ans);
	
}
