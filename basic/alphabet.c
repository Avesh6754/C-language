#include<stdio.h>
#include<conio.h>
main()
{
	char x;
	printf("Enter the value alphabet :");
	scanf(" %c",&x);
	if(x>=65 && x>=90 || x>=97 && x<=122)
	{
		printf("You Enter by alphabet");
	}
	else
	{
		printf("You Enter by dose not alphabet");
	}
}
