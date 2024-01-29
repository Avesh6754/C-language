#include<stdio.h>
#include<string.h>

struct student 
{
   char name[100];
   int d,m,y,age;	
};
void date(int n,int i,struct student s[n])
{
	year:
	printf("Enter the your year of birth :");
	scanf("%d",&s[i].y);
	
	if(s[i].y>=1924 && s[i].y<=2024)
	{
		month:
		printf("Enter the your month of birth :");
		scanf("%d",&s[i].m);
		if(s[i].m>=1 && s[i].m<=12)
		{
			if(s[i].m==1 || s[i].m==3 ||s[i].m==5||s[i].m==7||s[i].m==8||s[i].m==10||s[i].m==12)
			{
				start:
				printf("enter the date :");
				scanf("%d",&s[i].d);
				if(s[i].d>=1 && s[i].d<=31)
				{
					s[i].age=2024-s[i].y;
				}
				else
				{
					printf("enter the date between 1 to 31 :\n");
					goto start;
				}
			}
			else if(s[i].m==4||s[i].m==6||s[i].m==9||s[i].m==11)
			{
				star:
				printf("enter the date :");
				scanf("%d",&s[i].d);
				if(s[i].d>=1 && s[i].d<=30)
				{
					s[i].age=2024-s[i].y;
				}
				else
				{
					printf("enter the date between 1 to 30 :\n");
					goto star;
				}
				
			}
			else
			{
				if(s[i].m==2)
				{
					if(s[i].y%4==0)
					{
						sta:
						printf("you enter leapyear :");
						printf("enter the date :");
						scanf("%d",&s[i].d);
						if(s[i].d>=1 && s[i].d<=29)
						{
						s[i].age=2024-s[i].y;
						}
						else
						{
						printf("enter the date between 1 to 29 :\n");
						goto sta;
						}
					}
					else
					{
						st:
						printf("enter the date :");
						scanf("%d",&s[i].d);
						if(s[i].d>=1 && s[i].d<=28)
						{
						s[i].age=2024-s[i].y;
						}
						else
						{
							printf("enter the date between 1 to 28 :\n");
							goto st;
						}
						
					}
				}
			
			}
		}
		else
		{
			printf("Enter the year between 1 to 12\n");
			goto month;
		}
	}
	else
	{
		printf("Enter the year between 1924 to 2024\n");
		goto year;
	}

}
void user(int n,int i,struct student s[n])
{
	char name[100];
	printf("\nEnter the name : ");
	scanf(" %[^\n]s",name);
	strcpy(s[i].name,name);
	date(n,i,s);
}

void main()
{
	int n,i;
	printf("enter the value of n : ");
	scanf("%d",&n);
	
	struct student s[n];
	
	FILE *fp;
	fp=fopen("new.txt","w");
	for(i=0;i<n;i++)
	{
		user(n,i,s);
	}
	int j;
	for(j=0;j<n;j++)
	{
		
		printf("\nName : %s\n",s[j].name);
		printf("Date of Birth : %d/%d/%d\n",s[j].d,s[j].m,s[j].y);
		printf("Age : %d\n",s[j].age);
		fprintf(fp,"\nName : %s\n",s[j].name);
		fprintf(fp,"Date of Birth : %d/%d/%d\n",s[j].d,s[j].m,s[j].y);
		fprintf(fp,"Age : %d\n",s[j].age);
	}
	
}
