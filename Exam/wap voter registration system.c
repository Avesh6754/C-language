#include<stdio.h>

main()

{
//	 wap to make votter registration system.

    int a;
    printf("enter the value of a :");
	scanf("%d",&a);
	
	if(a>=18)
	{
		if(a<100)
		{
			printf("you age eligible for vote");
		}
		else
		{
			printf("you age not eligible for vote");
		}
		
	}
	else
	{
		if(a==0)
		{
			printf("you enter neutral age not valid ");
		}
		else
		{
			printf("you enter negative age not valid");
		}
	}
}
