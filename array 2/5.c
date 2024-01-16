#include<stdio.h>
main()
{
  int i,j,n,k,sum=0;
  
  printf("Enter the number of n : ");
  scanf("%d",&n);
  
  printf("Enter the number of k : ");
  scanf("%d",&k);
  
  int a[n][k];
  for(i=0; i<n; i++)
  {
    for(j=0; j<k; j++)
    {
      printf("Enter the a[%d][%d] : ",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  for(i=0; i<n; i++)
  {
    for(j=0; j<k; j++)
    {
      printf("%d ",a[i][j]);
    }
    printf("\n");
  }
  
  for(i=0; i<n; i++)
  {
    sum=0;
    for(j=0; j<k; j++)
    {
      sum = sum + a[j][i];
    }
    printf(" sum of %d k is %d",i+1,sum);
  }
  
}
