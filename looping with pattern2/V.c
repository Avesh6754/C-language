#include<stdio.h>
#include<conio.h>

main()

{
	int i,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 && i<5 || (j==5 && i<5)||(i==5 && j>1&&j!=3&&j<5)||(i==6 && j>2&&j<4))
			{
				printf(" *");
			}
			else
			{
				printf("  ");
			}
		}
			printf("\n");
	}
}