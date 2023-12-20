// 8. wap to printf multiplication table of 1 to 10.

#include<stdio.h>

main()

{
	int n=1,l=10;
	

	

	  for(n=1;n<=10;n++)
	  {
	  
		for(l=1;l<=10;l++)
		{
			printf("%d * %d = %d\n",n,l,n*l);
		}
		printf("\n");
	}
		
	
}