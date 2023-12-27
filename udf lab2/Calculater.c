#include<stdio.h>
void sum()
{
	int a,b;
	printf("%d + %d = %d\n",a,b,a+b);
}
void sub()
{
	int a,b;
	printf("%d - %d = %d\n",a,b,a-b);
}
void muti()
{
	int a,b;
	printf("%d * %d = %d\n",a,b,a*b);
}
void divid()
{
	int a,b;
	printf("%d / %d = %d\n",a,b,a/b);
}
void user()
{
	int a;
	int b;
	printf("entre the value of a : ");
	scanf("%d",&a);
	printf("entre the value of b : ");
	scanf("%d",&b);
}
int cal()
{
	
	char op;
	printf("enter your choice (+,-,*,/) :");
	scanf(" %c",&op);
	
	if(op=='q')
	{
		printf("you quit calc");
	}
	else
	{

	
	user();
	
	switch(op)
	{
		case'+':sum();
		break;
		case'-':sub();
		break;
		case'*':muti();
		break;
		case'/':divid();
		break;
		default:printf("Error");
		break;
	}
	}
  printf("\n");

}


main()

{
   while(1)
   {
   	 cal();
   }
}
