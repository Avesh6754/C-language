#include<stdio.h>

main()

{
	int x,y,z,ans;
	
	printf("enter the value of x : ");
	scanf("%d",&x);
	printf("enter the value of y : ");
	scanf("%d",&y);
	printf("enter the value of z : ");
	scanf("%d",&z);
	//(x-y-z)3.
	ans=(x*x*x)-(y*y*y) - (z*z*z) - 3*(x*x*y) + 3*(x*y*y) - 3*(y*y*z) - 3*(y*z*z) + 3*(x*z*z) - 3*(x*x*z) + 6*(x*y*z);
	printf("%d",ans);
	
}
