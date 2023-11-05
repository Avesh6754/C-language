#include<stdio.h>

main()

{
	int a ,first=0, second=0;
	
	printf("enter the value of a :");
	scanf("%d",&a);
	
	int n1=a%10;
	    a/=10;
	int n2=a%10;
	    a/=10;
	int n3=a%10;
	    a/=10;
	
	first=(n1*n2*n3);
	second=(n1+n2+n3);
	
	if(first==second)
	{
		printf("Magic number");
	}
	else
	{ 
	    printf("Not Magic number");
	}
	
}
