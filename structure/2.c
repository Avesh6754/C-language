#include<stdio.h>

struct student
{
	int emp_id,emp_age,emp_experience;
	char emp_name[20],emp_role[20],emp_city[20],emp_company_name[100];
	
}
main()

{
	int n,i;
	printf("enter the size of n :");
	scanf("%d",&n);
    struct student s1[n];
	char a[200];
	
	
	for(i=0;i<n;i++)
	{
		printf("\nenter the %demployees detail :\n",i+1);
		printf("enter the %demployee id :",i+1);
		scanf("%d",&s1[i].emp_id);
		printf("enter the %demployee name :",i+1);
		scanf(" %[^\n]s1",&a);
		strcpy(s1[i].emp_name,a);
		printf("enter the %demployee age :",i+1);
		scanf("%d",&s1[i].emp_age);
		printf("enter the %demployee role :",i+1);
		scanf(" %[^\n]s1",&a);
		strcpy(s1[i].emp_role,a);
		printf("enter the %demployee city :",i+1);
		scanf(" %[^\n]s1",&a);
		strcpy(s1[i].emp_city,a);
		printf("enter the %demployee experience :",i+1);
		scanf("%d",&s1[i].emp_experience);
		printf("enter the %demployee company name :",i+1);
		scanf(" %[^\n]s1",&a);
		strcpy(s1[i].emp_company_name,a);
	}
	for(i=0;i<n;i++)
	{
		printf("\nBleow the %demployee detail :\n",i+1);
		printf("emp_id : %d\n",s1[i].emp_id);
		printf("emp_name : %s\n",s1[i].emp_name);
		printf("emp_age : %d\n",s1[i].emp_age);
		printf("emp_role : %s\n",s1[i].emp_role);
		printf("emp_city : %s\n",s1[i].emp_city);
		printf("emp_experience : %d\n",s1[i].emp_experience);
		printf("emp_company_name : %s\n",s1[i].emp_company_name);
	}	
}
