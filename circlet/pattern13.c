#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{ //r
	  for(k=1;k<i;k++)
	  {
	  	printf(" ");
	  }
		for(j=i;j<=5;j++)
		{ //c
		   printf("%d",j);    
	    }
		printf("\n");
	}
}