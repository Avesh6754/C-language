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
	int *ptr3;
	
	ptr3=ptr;
	ptr=ptr2;
	ptr2=ptr3;
	
	printf("%d\n",*ptr);
	printf("%d",*ptr2);
	
}
