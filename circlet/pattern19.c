#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k;
	for(i=5;i>=1;i--)
	{ //r
	  
		for(j=1;j<=i;j++)
		{ //c
		   printf("%d",j);    
	    }
	    for(k=i;k<5;k++)
	    {
	    	printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
			
		}    
		printf("\n");
	}
	
	for(i=2;i<=5;i++)
	{ //r
	  
		for(j=1;j<=i;j++)
		{ //c
		   printf("%d",j);    
	    }
	    for(k=i;k<5;k++)
	    {
	    	printf("  ");
		}
		for(j=i;j>=1;j--)
		{
			printf("%d",j);
			
		}    
		printf("\n");
	}

}