#include<stdio.h>

main()
{
	FILE*even,*odd;
	even=fopen("Even.txt","w");
	odd=fopen("Odd.txt","w");
	int a=50,b=70;
	fprintf(even,"Even :\n");
	fprintf(odd,"Odd :\n");	
	for(a;a<=70;a++)
	{
		if(a%2==0)
		{
          fprintf(even,"%d ",a);
		}
		else
		{	
		   fprintf(odd,"%d ",a);	
		}
	}
}
