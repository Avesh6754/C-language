#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k=0;
	
	for(i=1;i<=5;i++)
	{ //r
	 
		for(j=i;j>=1;j--)
		{ //c
		   
		    k++;
		   if(k==12)
		   {
		   	continue;
		   	
		   	
		   } 
		   printf("%d",k);
		   
		     
	    }
		printf("\n");
	}
}