#include<stdio.h>

main()

{
	FILE*fp;
	fp=fopen("new.html","w");
	
	char name[20],address[100],school[100],course[20],soft[20],program[20];
	int age,year;
	double mobile_no;
	
	printf("enter your detail : \n");
	printf("enter your name : ");
	gets(name); 
	printf("enter your age : ");
	scanf("%d",&age);
	printf("enter your present year : ");
	scanf("%d",&year);
	printf("enter your address :");
	scanf(" %[^\n]",&address);
	printf("enter your course : ");
	scanf(" %[^\n]",&course);
	printf("enter your Soft skill : ");
	scanf(" %[^\n]",&soft);
	printf("enter your Programming skill : ");
	scanf(" %[^\n]",&program);
	printf("enter your College : ");
	scanf(" %[^\n]",&school);
	printf("enter your Mobile No : ");
	scanf("%lf",&mobile_no);
	
	printf("name : %s\n",name);
	printf("Age : %d\n",age);
	printf("Present-year of college : %d\n",year);
    printf("Address : %s\n",address);
	printf("course : %s\n",course);
	printf("Soft skill : %s\n",soft);
	printf("Programming skill : %s\n",program);
	printf("College : %s\n",school);
	printf("Mobile No : %.0lf\n",mobile_no);
	
	fprintf(fp,"%s","<html>");
	fprintf(fp,"%s","<head>");
	fprintf(fp,"%s","<title> Bio Data</title>");
	fprintf(fp,"%s","</head>");
	fprintf(fp,"%s","<body>");
	fprintf(fp,"%s","<center>");
	fprintf(fp,"%s","<h1 style = font-size:45px;>Basic Information</h1><br>");
	fprintf(fp,"%s","</center>");
	fprintf(fp,"%s","<h1 style =font-family:poppins; font-size:40px;> Personal Information </h1>");
	fprintf(fp,"<h2 style = font-size:25px;>Name : %s</h2>",name);
	fprintf(fp,"<h4 style = font-size:25px;>Age : %d</h4>",age);
	fprintf(fp,"<h4 style = font-size:25px;>Address : %s</h4>",address);
	fprintf(fp,"<h4 style = font-size:25px;>Mobile No : %.0lf</h4>",mobile_no);
	fprintf(fp,"%s","<h1 style =font-family:poppins; font-size:40px;> Educational Backgound </h1>");
	fprintf(fp,"<h2 style = font-size:25px;>College : %s</h2>",school);
	fprintf(fp,"<h4 style = font-size:25px;>Course : %s</h4>",course);
	fprintf(fp,"<h4 style = font-size:25px;>Present-year : %d</h4>",year);
	fprintf(fp,"%s","<h1 style = font-family:poppins;font-size:40px;> Skills </h1>");
	fprintf(fp,"<h4 style =font-size:25px;>Soft skill : %s</h4>",soft);
	fprintf(fp,"<h4 style = font-size:25px;>Programming skill : %s</h4>",program);
	fprintf(fp,"%s","</body>");
	fprintf(fp,"%s","</html>");
	
}
