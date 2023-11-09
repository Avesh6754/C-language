#include<stdio.h>

main()
{
//	5. Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. 
//    Calculate the percentage and grade according to the following
//        Percentage >= 90% : Grade A
//        Percentage >= 80% : Grade B
//        Percentage >= 70% : Grade C
//        Percentage >= 60% : Grade D 
//        Percentage >= 50% : Grade E
//        Percentage >= 40% : Grade F

	int physic,bio,chemistry,math,computer;
	float total;
	printf("enter the mark of bio : ");
	scanf("%d",&bio);
	printf("enter the mark of physic : ");
	scanf("%d",&physic);
	printf("enter the mark of math : ");
	scanf("%d",&math);
	printf("enter the mark of computer : ");
	scanf("%d",&computer);
	printf("enter the mark of chemistry : ");
	scanf("%d",&chemistry);
	
	total=(physic+bio+chemistry+math+computer)/5.0;
	
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
