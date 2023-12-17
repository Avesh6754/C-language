#include<stdio.h>
#include<conio.h>

//2. Write C program to print multiplication table of any number.
main()

{
   int a,c=1;
    printf("enter the value of a : ");
    scanf("%d",&a);
    for(c=1;c<=10;c++)
    {
      printf("%d * %d = %d\n",a,c,a*c);
    }

}