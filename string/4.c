//1. WAP to convert given string in lowercase.
#include<stdio.h>
#include<string.h>
main()
{
	char a[50];
	int len,i;
	printf("enter the string in uppercase : ");
	gets(a);
	len = strlen(a);
	for(i=0; i<len; i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i] = a[i] + 32;
		}
	}
	printf(" lowercase string : %s",a);
}
