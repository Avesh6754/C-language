#include<stdio.h>

main()
{
	int a;
	//32–47 / 58–64 / 91–96 / 123–126)
	printf("enter the value of a :");
	scanf(" %c",&a);
	
	if(a>='A' && a<='Z' || a>='a' && a<='z')
	{
		printf("Alphabte");
	}
	else if(a>='0' && a<='9')
	{
		printf("Digit");
	}
	else
	{
		printf("special character");
	}
}
