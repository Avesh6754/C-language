#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{ //r
	  for(k=i;k<5;k++)
	  {
	  	printf(" ");
	  }
		for(j=i;j>=1;j--)
		{ //c
		   printf("%d",j);    
	    }
		printf("\n");
	}
}