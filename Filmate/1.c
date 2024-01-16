//2. WAP compares two strings.

#include<stdio.h>
#include<string.h>

main()
{
  char a[100],b[100];
  int i,j,check=0;
  
  printf("enter the first string : ");
  gets(a);
  
  printf("enter the second string : ");
  gets(b);
  
  for(i=0; a[i]!='\0' && b[i]!='\0'; i++)
  {
    if(a[i] != b[i])
    {
      check = 1;
    }
  }
  
  if(check == 0)
  {
    printf("Yes, Both are equal");
  }
  else
  {
    printf("No, Bothare not equal");
  }
  
}
