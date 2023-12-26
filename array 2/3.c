#include<stdio.h>
#include<conio.h>

main()
{
   int n,m;
   printf("enter the size of n : ");
   scanf("%d",&n);
   printf("enter the size of m : ");
   scanf("%d",&m);
   int a[n],b[m],c[n+m],i;
   for(i=0;i<n;i++)
   {
   	   printf("enter the value of a[%d] : ",i);
       scanf("%d",&a[i]);
   }
   for(i=0;i<m;i++)
   {
   	   printf("enter the value of b[%d] : ",i);
       scanf("%d",&b[i]);
   }
   printf("\n");
   for(i=0;i<n;i++)
   {
   	  c[i]=a[i];
   }
    for(i=0;i<m;i++)
   {
   	  c[n+i]=b[i];
   }
    for(i=0;i<(n+m);i++)
   {
   	  printf("%d",c[i]);
   }
   
   
      	
}