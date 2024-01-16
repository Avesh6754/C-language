//4. WAP to given string in reverse.
#include<stdio.h>
main()
{
	char a[50];
	int j = 0,i;
	printf("enter The string : ");
	gets(a);
	
	while(a[j] != '\0')
	{
		j++;
	}
	for(i=j-1; i>=0; i--)
	{
		printf("%c",a[i]);
	}
	
}
