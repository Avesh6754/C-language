//Fcatorial and sum using recusrion.

#include<stdio.h>

int multi(int a)
{
      if(a==1)
	  {
    	return 1;	  	
	  }	
	  return a*multi(a-1);
}
main()
{
	int a;
	printf("entre the value of a : ");
	scanf("%d",&a);
	printf("%d",multi(a));
	
}