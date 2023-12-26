#include<stdio.h>

void len(char name[])
{
	int length=strlen(name);
	printf("Total = %d",length);
	
}
main()

{
	char name[50];
	printf("enter the name :");
	gets(name);
	len(name);
	
}