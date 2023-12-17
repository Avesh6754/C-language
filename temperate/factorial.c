//5. Write C program to calculate factorial of a number.

#include<stdio.h>
#include<conio.h>

main()
{
  int a=1,n,sum=1;
  printf("enter the value of a : ");
  scanf("%d",&n);
  while(n>=a)
  { 
    sum=sum*n;
     n--;
  }
  printf("%d",sum);
}