#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
	
	for(i=5;i>=1;i--)
	{ //r
	  for(k=i;k<5;k++)
	  {
	  	printf(" ");
	  }
		for(j=1;j<=i;j++)
		{ //c
		   printf("%d",j);    
	    }
		printf("\n");
	}
}