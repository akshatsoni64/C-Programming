#include<stdio.h>
#include<conio.h>
void main()
{

	int i,n;
	int code[10],TA[10];
	float DA[10],TT[10],HRA[10];
	char name[10][50];
	double BS[10];

	clrscr();

	printf("Enter No. of Employees (Max=10) : ");
	scanf("%d",&n);

	clrscr();

	for(i=0;i<n;i++)
	{
		printf("Employee %d : \n",i+1);
		printf("Enter Name of Employee : ");
		gets(name[i]);
		printf("Enter Code of Employee : ");
		scanf("%d",&code[i]);
		printf("Enter Basic Salary of Employee : ");
		scanf("%lf",&BS[i]);
		printf("Enter other Allowances of Employee : ");
		scanf("%d",&TA[i]);
		clrscr();
	}

	for(i=0;i<n;i++)
	{
		DA[i]=(BS[i]*119)/100;
		HRA[i]=(BS[i]*20)/100;
		TT[i]=(BS[i]+DA[i]+HRA[i])-TA[i];
	}

	for(i=0;i<n;i++)
	{
		printf("\n\n\nEmployee %d :",i+1);
		printf("\n\t\t		  Salary Slip : \n");
		printf("\n\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*\n");		printf("\n\t|Employee Name : %s |Employee Code : %d",name[i],code[i]);
		printf("\n\t|DA : %f \t|HRA : %f\t|TA : %d",DA[i],HRA[i],TA[i]);
		printf("\n\t|Basic Salary: %lf |Total Salary : %f",BS[i],TT[i]);
		printf("\n\n\t-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*");
		getch();
	}

	printf("\n\n\n\n\n\t\t\t\t!!Thank You!!");
	getch();
}
