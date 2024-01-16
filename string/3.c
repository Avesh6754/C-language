//6. WAP to convert given string in Title Case.
#include<stdio.h>
#include<string.h>
main()
{   
    char a[100];
	int i=0,len;
	
	printf("enter the string : ");
	gets(a);
	len = strlen(a);
	
	if(a[0]>='a' && a[0]<='z')
	{
		a[0] = a[0] - 32;
	}
	for(i=1; i<len; i++)
	{
		if(a[i-1] == 32)
		{
			if(a[i]>='a' && a[i]<='z')
			{
				a[i] = a[i] - 32;
			}
		}
		else if(a[i]>='A' && a[i]<='Z')
		{
			a[i] = a[i] + 32;
		}
		else if(a[i] == 32)
		{
			if(a[i]>='a' && a[i]<='z')
			{
				a[i+1] = a[i+1] - 32;
			}
		}
	}
	printf("Title Case is : %s",a);
}
