#include<stdio.h>

main()

{
	int x=10,y=20;
	
	printf("%d",!((x>y && x<y)||(x>=10 && y<=20)||(x<=y) && (x>=0) || (x<10) && (y<21)));
}
