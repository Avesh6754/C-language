#include<stdio.h>
#include<conio.h>

main()

{
//Q.1 Write a Program to find the length of a 1D array
	int a[]={5,6,8,7,4,5,2};
	
	int length=sizeof(a)/sizeof(a[0]);
	
	printf("%d ",length);

}
