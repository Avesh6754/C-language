//1.wap to count frequency of each charcter in a string.

#include<stdio.h>
#include<string.h>
main()
{
	char a[100];
	int i,j,x=1;
	int len;
	
	printf("enter the string : ");
	gets(a);
	
	len = strlen(a);
	
	for(i=0; i<len; i++)
	{
		for(j=i+1; j<len; j++)
		{
			if(a[i] == a[j])
			{
				x++;
				a[j] = 0;
			}
		}
		if(a[i] != 0)
		{
			printf("%c->%d\n",a[i],x);
		}
		x=1;
	}
}
