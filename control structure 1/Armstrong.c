#include<stdio.h>

main()

{
	int n,ans,check;

	printf("enter the value of n :");
	scanf("%d",&n);
	check=n;
	
	int n1=n%10;
	    n/=10;
	int n2=n%10;
	    n/=10;
	int n3=n%10;
	    n/=10;
	
	 
	 ans=(n1*n1*n1)+(n2*n2*n2)+(n3*n3*n3);
	 
	 if(check==ans)
	 {
	 	printf("Armstrong Number");
	 }
	 else
	 {
	 	printf("Not Armstrong Number");
	 }
	 
	 
	    
}
