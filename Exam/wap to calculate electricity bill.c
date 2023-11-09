#include<stdio.h>

main()
{
	// wap to calculate electricity bill.
	int unit,charge,total=0;
	
	printf("entre the value of unit :");
	scanf("%d",&unit);
	
	if(unit>=0 && unit<=50)
	{
		total=unit*0.50;
		
	}
	else if(unit>50 && unit<=100)
	{
		total=(unit*0.50)+(unit-50)*0.75;
	}
	else if(unit>100 && unit<=150)
	{
		total=(unit*0.50)+(unit*0.75)+(unit-100)*1.25;
	}
	
	charge=total*0.20;
	total=total+charge;
	printf("%d",total);
}
