#include<stdio.h>
#include<conio.h>

struct slry
{
	int code,TA;
	float DA,TT,HRA;
	char name[50];
	unsigned int BS;
}s[10];

void main()
{

	int i,n;

	clrscr();

	printf("Enter No. of Employees (Max=10) : ");
	scanf("%d",&n);

	clrscr();

	for(i=0;i<n;i++)
	{
		printf("Employee %d : \n",i+1);
		printf("Enter Name of Employee : ");
		scanf("%s",&s[i].name);
		printf("Enter Code of Employee : ");
		scanf("%d",&s[i].code);
		printf("Enter Basic Salary of Employee : ");
		scanf("%d",&s[i].BS);
		printf("Enter other Allowances of Employee : ");
		scanf("%d",&s[i].TA);
		clrscr();
	}

	for(i=0;i<n;i++)
	{
		s[i].DA=(s[i].BS*119)/100;
		s[i].HRA=(s[i].BS*20)/100;
		s[i].TT=(s[i].BS+s[i].DA+s[i].HRA)-s[i].TA;
	}

	for(i=0;i<n;i++)
	{
		printf("\n\n\nEmployee %d :",i+1);
		printf("\n\t\t		  Salary Slip : \n");
		printf("\n\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");
		printf("\n\t|Employee Name : %s |Employee Code : %d",s[i].name,s[i].code);
		printf("\n\t|DA : %f \t|HRA : %f\t|TA : %d",s[i].DA,s[i].HRA,s[i].TA);
		printf("\n\t|Basic Salary: %1d |Total Salary : %f",s[i].BS,s[i].TT);
		printf("\n\n\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
		getch();
		clrscr();
	}

	printf("\n\n\t\t\t\t!!Thank You!!");
	getch();
}