#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k,l;
	printf("    *\n");
	for(i=3;i>=1;i--)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=1;j++)
		{
			printf("* ");
		}
		for(k=i;k<4;k++)
		{
			printf("  ");
		}
		for(l=3; l>=3; l--)
		{
			printf("*");
		}
		printf("\n");
	}
}