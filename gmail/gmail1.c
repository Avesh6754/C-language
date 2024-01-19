#include<stdio.h>
#include<string.h>

main()
{
	char gmail[100];
	char gmai[11]="@gmail.com";
	int i,len,check=0,j=0;
	start:
	printf("\nEnter your Eamil id : ");
	gets(gmail);
	len=strlen(gmail);
	int l=len-10;
	if(len>=12 && len<=38)
	{
		for(i=l;i<=len;i++)  
		{
			if(gmail[i]==gmai[j])
			{
				check++;
			}
			j++;
	 	
	 	}
	 	if(check==11)
	 	{
	 		check=0;
	 		for(i=0;i<=l;i++)
	 		{
	 			if(gmail[i]>='A'&& gmail[i]<='Z')
	 			{
	 				check=1;
				}
			}
			if(check==0)
			{
				for(i=0;i<=l;i++)
				{
					if(gmail[i]>='0'&&gmail[i]<='9')
					{
						check=1;
					}
				}
				if(check==1)
				{
					check=0;
					for(i=0;i<l;i++)
					{
						if(gmail[i]>=32 &&gmail[i]<=47 || gmail[i]>=58&&gmail[i]<=63 || gmail[i]>=91&&gmail[i]<=96 || gmail[i]>=123 &&gmail[i]<=126)
						{
							check=1;
						}
					}
					if(check==0)
					{
						printf("Your Gmail successfully created :");
					}
					else
					{
						printf("Special character and Space are not allowed :");
						goto start;
					}
				}
				else
				{
					printf("Minimum 1 Digit required :");
					goto start;
				}
			}
			else
			{
				printf("Uppercase Letter not Required :");
				goto start;
			}
		}
		else
		{
			printf("Format of Gmail are Equal to @gmail.com :");
			goto start;
		}
	 	
	}
	 
}

