#include<stdio.h>

int sum(int n)
{
      if(n==1)
      {
      	return 1;
	  }
	  return n+sum(n-1);
}
main()
{
	int n;
	printf("entre the value of a : ");
	scanf("%d",&n);
	printf("%d",sum(n));
	
}