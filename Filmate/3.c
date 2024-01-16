//5. WAP check string is numeric or not

#include<stdio.h>
#include<string.h>
main()
{
	char a[50],b[50];
	int i,len,check=0;
	
	printf("enter the string : ");
	gets(a);
	
	len = strlen(a);
	
	for(i=0; i<len; i++)
	{
		if(a[i] >= '0' && a[i] <= '9')
		{
			check = 1;
			break;
		}
	}
	if(check == 1)
	{
		printf("Yes, string is numeric");
	}
	else
	{
		printf("No, string is not numeric");
	}
}
