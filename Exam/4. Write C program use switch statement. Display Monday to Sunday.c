#include<stdio.h>

main()
{
	char day;
	printf("enter the value of day : ");
	scanf(" %c",&day);
	
	switch(day)
	{
		case 'M':printf("Monday");
		break;
		case 'T':printf("Tuesday");
		break;
		case 'W':printf("Wednesday");
		break;
		case 't':printf("Thursday");
		break;
		case 'F':printf("Friday");
		break;
		case 's':printf("saturday");
		break;
		case 'S':printf("Sunday");
		break;
		default:printf("enter M,T,W,t,f,s,S");
		
	}
}
