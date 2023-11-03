#include<stdio.h>

main()

{
//	/4. Write C Program to find gross salary.(GROSS SALARY=BASE SALARY+HRA+DA+TA)
//Ex. Base Salary: 100 RS, HRA=10, DA=5, TA=8.
//Ans = 123 RS
	
	int salary,HRA,DA,TA,total=0;
	printf("enter the net salary : ");
	scanf("%d",&salary);
	
	HRA=salary*10/100;
	DA=salary*5/100;
	TA=salary*8/100;
	
	total=HRA+DA+TA+salary;
	
	printf("HRA=%d\n",HRA);
	printf("TA=%d\n",TA);
	printf("DA=%d\n",DA);
	printf("total salary =%d",total);
	
	


}
