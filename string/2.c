//1. WAP to convert given string in uppercase.
#include<stdio.h>
#include<string.h>
main()
{
  char a[100];
  int len,i;
    
  printf("enter The string : ");
  gets(a);
  len = strlen(a);
  for(i=0; i<len; i++)
  {
    if(a[i]>='a' && a[i]<='z')
    {
      a[i] = a[i] - 32;
    }
  }
  printf("uppercase string is : %s",a);
}
