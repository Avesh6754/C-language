#include<stdio.h>
#include<conio.h>

main()
//5 5 5 5 5
//4 4 4 4
//3 3 3
//2 2
//1
{
	int i,j;
	
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
