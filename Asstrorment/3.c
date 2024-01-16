#include<stdio.h>
main()
{
  int n,i,sum=0;
  
  printf("Enter the size  : ");
  scanf("%d",&n);
  
  int a[n],b[n],c[n];
  
  printf("\nEnter the value of first array  \n");
  
  for(i=0; i<n; i++)
  {
    printf("Enter the value of a[%d] : ",i);
    scanf("%d",&a[i]);
  }
  for(i=0; i<n; i++)
  {
    printf("Enter the value of b[%d] : ",i);
    scanf("%d",&b[i]);
  }
  for(i=0; i<n; i++)
  {
    c[i] = a[i] + b[i];
  }
  for(i=0; i<n; i++)
  {
    printf("%d ",c[i]);
  }
  
}
