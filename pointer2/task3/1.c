#include<stdio.h>

main()

{

     char a[100];
	 printf("enter the value of a :");
	 gets(a);
	 
	 char *ptr=&a[0];
	 int len;
	 for(len=0;*ptr!='\0';len++)
	 {
	 	ptr++;
	 }
	    printf("%d",len);
	 
	 
	 
	 
	 	
}