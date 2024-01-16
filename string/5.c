//3. WAP to given string length
#include<stdio.h>
main()
{
  char a[50];
  int i;
  printf("enter the string : ");
  gets(a);
  
  for(i=0;a[i] != '\0';i++) 
  {
    i++;
  }
  printf(" length of string  : %d",i-1);
  

}
