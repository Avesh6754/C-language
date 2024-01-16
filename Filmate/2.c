//4. Copy one string into another

#include<stdio.h>
#include<string.h>

main()
{
	char a[50],b[50];
	int i,len;
	
	printf("Enter the string : ");
	gets(a);
	len = strlen(a);
	for(i=0; i<len; i++)
	{
		 b[i] = a[i];
	}
	printf("The first string store in a : %s",a);
	printf("\nThe copie string is store in b : %s",b);

}
