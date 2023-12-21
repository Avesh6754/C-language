#include<stdio.h>
#include<conio.h>

main()

{
	int i ,j;
	
	for(i=1;i<=7;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(j==1 && i>0 && i<2 ||(i==1 && i<6)||(i==2 &&j>3&&j<5)||(i==3 &&j>2&&j<4)||(i==4&& j>1&&j<3)||(i==5&&j>0&&j<2)||(i==6))
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
