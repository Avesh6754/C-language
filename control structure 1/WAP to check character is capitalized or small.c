#include<stdio.h>

main()

{
   char Alphabte;
   
   printf("enter the Alphabte :");
   scanf(" %c",&Alphabte);
   
   if(Alphabte >=65 && Alphabte <=90)
   {
   	   printf("Capital Alphabte");
   }
   else
   {
   	    printf("Small Alphabte");
   }
}
