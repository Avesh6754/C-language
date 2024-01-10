#include<stdio.h>
#include<stdio.h>
#include<conio.h>

void cube()
{
	int n;
	printf("enter the size of n : ");
	scanf("%d",&n);
	
	int a[n][n],i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter the value of array : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	array(n,a);
}
void array(int n,int a[n][n])
{
	int *ptr,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			ptr=&a[i][j];
			*ptr=*ptr*(*ptr)*(*ptr);
			printf("%d ",*ptr);
			
		}
	}
	
	
}
void main()
{
	cube();
}

