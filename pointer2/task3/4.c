#include<stdio.h>
void change(int *ptr)
{
	int n;
	printf("enter the value of n :");
	scanf("%d",&n);
	
	*ptr=n;
}
main()
{
	int a;
	printf("enter the value of a :");
	scanf("%d",&a);
	
	printf("%d\n",a);
	
	int *ptr=&a;
	
	change(ptr);
	printf("%d",a);
	
}
