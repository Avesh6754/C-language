//5. WAP to convert given string in Toggal Case.
#include<stdio.h>
#include<stdio.h>
main()
{
	char a[50];
	int i=0,len;
	
	printf("enter the string  : ");
	gets(a);
	
	len = strlen(a);
	
	if(a[0]>='a' && a[0]<='z')
	{
		a[0] = a[0] - 32;
	}
	
	for(i=1; i<=len; i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i] = a[i] + 32;
		}
	}
	printf("Toggal Case is : %s",a);	
}
