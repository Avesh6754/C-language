#include<stdio.h>

main()

{
	int age;
	printf("enter the your age : ");
	scanf("%d",&age);
	
	if(age>0)
	{
		if(age<100)
		{
			printf("you enter right age");
		}
		else
		{
			printf("you enter wrong age");
		}
	}
	else
	{
		if(age==0)
		{
			printf("you enter neutral age");
			
		}
		else
		{
			printf("you enter negative age");
		}
	}
}
