#include<stdio.h>
#include<string.h>
struct student
{
	int roll_no,chem, maths, phy;
	char name[100];
};
main()
{
	struct student s[5];
	char name[100];
 	int i,total;
 	float result;
 	for(i=0; i<5; i++)
 	{
	    printf("enter the details for student : %d\n",i+1);
		printf("enter the student name :");
		scanf(" %[^\n]s",&s[i].name);
		printf("enter the student roll no:");
		scanf("%d",&s[i].roll_no);
		printf("enter the student chem marks:");
		scanf("%d",&s[i].chem);
		printf("enter the student maths marks:");
		scanf("%d",&s[i].maths);
		printf("enter the student phy marks:");
		scanf("%d",&s[i].phy);
	}
 	for(i=0; i<5; i++)
 	{	printf("\nstudent result are below\n",i+1);
 		printf("%s(%d)\n",s[i].name,s[i].roll_no);
 		printf("Mathematics: %d\n",s[i].maths);
 		printf("Physics: %d\n",s[i].phy);
 		printf("Chemistry: %d\n",s[i].chem);
 		total=s[i].chem+s[i].maths+s[i].phy;
 		printf("Total: %d/300\n",total);
 		result=(total*100.0)/300;
 		printf("Percentage: %.2f%%",result);
	} 
}
