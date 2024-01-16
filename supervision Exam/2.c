#include<stdio.h>
#include<string.h>

struct student
{
	int rollno,chemmarks, mathsmarks, phymarks;
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
		
		printf("enter the chem_marks : \n");
		scanf("%d",&s[i].chemmarks);
		
		printf("enter the maths_marks : \n");
		scanf("%d",&s[i].mathsmarks);
		
		printf("enter the phy_marks : \n");
		scanf("%d",&s[i].phymarks);
	}
 	for(i=0; i<5; i++)
 	{	printf("\n\nThe Student %d result is below\n",i+1);
 		printf("%s(%d)\n",s[i].name,s[i].rollno);
 		printf("Chemistry   : %d\n",s[i].chemmarks);
 		printf("Mathematics : %d\n",s[i].mathsmarks);
 		printf("Physics     : %d\n",s[i].phymarks);
 		total = s[i].chemmarks + s[i].mathsmarks + s[i].phymarks;
 		printf("Total : %d/300\n",total);
 		result = (total*100.0)/300;
 		printf("Percent : %.2f%%",result);
	} 
}
