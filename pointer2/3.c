#include<stdio.h>

main()
{
	int y,x;
	printf("enter the value of y : ");
	scanf("%d",&y);
	printf("enter the value of x : ");
	scanf("%d",&x);
	
	int *ptr=&y;
	int *ptr2=&x;
	
//	y=y+x;
//	x=y-x;
//	y=y-x;
	
	*ptr=*ptr+*ptr2;
	*ptr2=*ptr-*ptr2;
	*ptr=*ptr-*ptr2;
	
	printf("%d\n",*ptr);
	printf("%d",*ptr2);
	
}
