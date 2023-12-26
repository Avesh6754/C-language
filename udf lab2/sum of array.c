#include<stdio.h>
#include<conio.h>
//Q.1 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF.
int cube(int a[],int n)
{
   int sum=0,i;

    
	for(i=0;i<n;i++)
    {
      sum=sum+a[i];	
	}
	
	return sum;
	
}

int main()

{
	 
	int n;
	printf("enter the size of n : ");
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
    {
	printf("enter the value of a[%d] : ",i);
	scanf("%d",&a[i]);
	}
	printf("sum = %d",cube(a,n));
}