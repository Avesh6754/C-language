#include<stdio.h>
#include<conio.h>

main()

{
	char i,j,count='A';
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",count);
			count++;
		}
		printf("\n");
	}
}
