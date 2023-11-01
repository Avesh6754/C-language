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
	//(x+y+z)3.
	ans=(x*x*x) + (y*y*y) + (z*z*z) + (3)*((x+y)*(y+z)*(z+x));
	printf("%d",ans);
	
}
