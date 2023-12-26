#include<stdio.h>
#include<conio.h>

main()
{
   int current,old,total=0,year,x=0;
   printf("enter the current year : ");
   scanf("%d",&current);
   printf("enter the old year : ");
   scanf("%d",&old);
   total=current-old;
   year=(total/4)+1;
   
   int a[year],i;
   for(i=old;i<=current;i++)
   {
   	   if(i%4==0)
   	   {
   	   	  a[x]=i;
   	   	  x++;
	   }
   }
   printf("\n");
   for(i=0;i<x;i++)
   {
   	   printf("%d ",a[i]);
   }
   
      	
}