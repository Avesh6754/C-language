#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{ //r
		for(j=1;j<=5;j++)
		{ //c
		    if(i==1||j==1||i==3||j==5)
		    {
		    	printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}