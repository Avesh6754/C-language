//1. WAP check string is palindrome or not.

#include<stdio.h>
#include<string.h>
main()
{
  char a[100];
  int i,len,check=0;
  
  printf("Enter the string : ");
  gets(a);
  len = strlen(a);
  
  for(i=0; i<len; i++)
  {
    if(a[i] != a[len-i-1])
    {
      check = 1;
    }
  }
  
  if(check == 0)
  {
    printf("\nYes, string is palindrom");
  }
  else
  {
    printf("\nNo,string is not palindrom");
  }
}
