#include<stdio.h>
int sum(int a,int b)
{
    printf("%d + %d = %d ",a,b,a+b);	
	
}
int sub(int a,int b)
{
	printf("%d - %d = %d ",a,b,a-b);
}
int muti(int a,int b)
{
	printf("%d * %d = %d ",a,b,a*b);	
}
int divid(int a,int b)
{
	printf("%d / %d = %d ",a,b,a/b);	
}
int remindar(int a,int b)
{
	printf("%d %% %d = %d ",a,b,a%b);
}
main()

{
	while(1)
  {
  	
  	 printf("press 1 for +\n");
	 printf("press 2 for -\n");
	 printf("press 3 for *\n");
	 printf("press 4 for /\n");
	 printf("press 5 for %%\n");
	 printf("press 0 for quit\n");
     int n;
     start:
	 printf("enter your choice (+,-,*,/) :");
	 scanf("%d",&n);

	if(n==0)
	{
		break;
	}
	else
	{

     int a;
	 int b;
	 printf("entre the value of a : ");
	 scanf("%d",&a);
	 printf("entre the value of b : ");
	 scanf("%d",&b);
	  switch(n)
	 {
		case 1:sum(a,b);
		break;
		case 2:sub(a,b);
		break;
		case 3:muti(a,b);
		break;
		case 4:divid(a,b);
		break;
		case 5:remindar(a,b);
		break;
		default:printf("Error");
		break;
	 }
     printf("\n\n");
	}
  }
}

