#include<stdio.h>

struct student
{
	int stu_id,stu_age,stu_standard;
	char stu_name[20],stu_course[20],stu_city[20],stu_school[100];
	
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
		printf("\nenter the %dstudent detail :\n",i+1);
		printf("enter the %dstudent id :",i+1);
		scanf("%d",&s1[i].stu_id);
		printf("enter the %dstudent name :",i+1);
		scanf(" %[^\n]s1",&a);
		strcpy(s1[i].stu_name,a);
		printf("enter the %dstudent age :",i+1);
		scanf("%d",&s1[i].stu_age);
		printf("enter the %dstudent course :",i+1);
		scanf(" %[^\n]s1",&a);
		strcpy(s1[i].stu_course,a);
		printf("enter the %dstudent city :",i+1);
		scanf(" %[^\n]s1",&a);
		strcpy(s1[i].stu_city,a);
		printf("enter the %dstudent standard :",i+1);
		scanf("%d",&s1[i].stu_standard);
		printf("enter the %dstudent school :",i+1);
		scanf(" %[^\n]s1",&a);
		strcpy(s1[i].stu_school,a);
	}
	for(i=0;i<n;i++)
	{
		printf("\nBleow the %dstudent detail :\n",i+1);
		printf("stu_id : %d\n",s1[i].stu_id);
		printf("stu_name : %s\n",s1[i].stu_name);
		printf("stu_age : %d\n",s1[i].stu_age);
		printf("stu_course : %s\n",s1[i].stu_course);
		printf("stu_city : %s\n",s1[i].stu_city);
		printf("stu_standard : %d\n",s1[i].stu_standard);
		printf("stu_school : %s\n",s1[i].stu_school);
	}	
}
