#include<stdio.h>

main()

{
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=6;j++)
		{
			if(j==4 && i>1 && i<7 || (i==1 && j>1&&j<7)||(i==6 && j>0&&j<2)||(i==7 && j>1&&j<4))
            {
			
				printf("* ");
			}
			else
			{
				printf("  ");
			}
			
		}
		printf("\n");
	}
}