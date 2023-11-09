#include<stdio.h>

main()
{int english,hindi,science,math,computer;
	float total;
	printf("enter the mark of science : ");
	scanf("%d",&science);
	printf("enter the mark of hindi : ");
	scanf("%d",&hindi);
	printf("enter the mark of english : ");
	scanf("%d",&english);
	printf("enter the mark of computer : ");
	scanf("%d",&computer);
	printf("enter the mark of math : ");
	scanf("%d",&math);
	
	total=(english+hindi+science+math+computer)/5.0;
	
	if(total>=90 && total<100)
	{
		printf("Grade A\n");
		printf("total = %.2f\n",total);
	}
	else if(total>=80 && total<90)
	{
		printf("Grade B\n");
		printf("total = %.2f\n",total);
	}
	else if(total>=70 && total<80)
	{
		printf("Grade C\n");
		printf("total = %.2f\n",total);
	}
	else if(total>=60 && total<70)
	{
		printf("Grade D\n");
		printf("total = %.2f\n",total);
	}
	else if(total>=50 && total<60)
	{
		printf("Grade E\n");
		printf("total = %.2f\n",total);
	}
	else if(total>=40 && total<50)
	{
		printf("Grade F\n");
		printf("total = %.2f\n",total);
	}
}
