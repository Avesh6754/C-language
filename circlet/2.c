#include<stdio.h>
#include<conio.h>

main()
{
	int i,j,k=11;
	
	for(i=41;i<=45;i++)
	{
		for(j=41;j<=i;j++)
		{
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}
}