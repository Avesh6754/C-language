#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{ //r
		for(j=5;j>=i;j--)
		{ //c
		   printf("%d",j);    
	    }
		printf("\n");
	}
}