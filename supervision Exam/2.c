#include<stdio.h>
#include<string.h>

struct student
{
	int rollno,chem, maths, phy;
	char name[100];
};
main()
{
	struct student s[5];
	char name[200];
 	int i,total;
 	float result;
 	
 	for(i=0; i<5; i++)
 	{
	 
 		printf("\nenter the details for student : %d\n",i+1);
		printf("enter the name : ");
		scanf(" %[^\n]s",&s[i].name);
		
		printf("enter the roll no. : \n");
		scanf("%d",&s[i].rollno);
		
		printf("enter the chem marks : \n");
		scanf("%d",&s[i].chem);
		
		printf("enter the maths marks : \n");
		scanf("%d",&s[i].maths);
		
		printf("enter the phy marks : \n");
		scanf("%d",&s[i].phy);
	}
 	for(i=0; i<5; i++)
 	{	printf("\n\nThe Student %d result is below\n",i+1);
 		printf("%s(%d)\n",s[i].name,s[i].rollno);
 		printf("Chemistry   : %d\n",s[i].chem);
 		printf("Mathematics : %d\n",s[i].maths);
 		printf("Physics     : %d\n",s[i].phy);
 		total = s[i].chem + s[i].maths + s[i].phy;
 		printf("Total : %d/300\n",total);
 		result = (total*100.0)/300;
 		printf("Percentage : %.2f%%",result);
	} 
}
