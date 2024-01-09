#include<stdio.h>

main()
{
	int y;
	printf("enter the value of y : ");
	scanf("%d",&y);
	
	int *ptr=&y;
	int **ptr2=&ptr;
	int ***ptr3=&ptr2;
	int ****ptr4=&ptr3;
	printf("%d\n",ptr);
	printf("%d\n",*ptr);
	printf("%d\n",**ptr2);
	printf("%d\n",***ptr3);
	printf("%d",****ptr4);
	
	
	
}
