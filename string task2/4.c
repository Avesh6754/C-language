//2. Write a c program to check whether a string is palindrom or not.

#include<stdio.h>
#include<string.h>
main()
{
  char a[100];
  int i,len,check=0;
  
  printf("enter the string : ");
  gets(a);
  len= strlen(a);
  
  for(i=0; i<len; i++)
  {
    if(a[i] != a[len-i-1])
    {
      check = 1;
    }
  }
  
  if(check == 0)
  {
    printf("Yes, string is palindrom");
  }
  else
  {
    printf("No, string is not palindrom");
  }
}
