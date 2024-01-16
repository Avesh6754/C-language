//3. Count No. of digits, alphabets & and special characters.

#include<stdio.h>
#include<string.h>

main()
{
  char a[50];
  int i,len,d=0,n=0,s=0;
  
  printf("Enter the string : ");
  gets(a);
  
  len = strlen(a);
  
  for(i=0; i<len; i++)
  {
    if(a[i] >= '0' && a[i] <= '9')
    {
      d++;
    }
    else if(a[i] >= 'a' && a[i] <= 'z' || a[i] >= 'A' && a[i] <= 'Z')
    {
      n++;
    }
    else
    {
      s++;
    }
  }
  printf("number of digit is : %d\n",d);
  printf("number of alphabet is : %d\n",n);
  printf("number of special character is : %d\n",s);
  
}
