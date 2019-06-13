/* W.A.C.P. to demonstrate structure by creating student info (name,branch,eno,sem,age)*/
#include<stdio.h>
#include<conio.h>

struct stu
{
	struct name
	{
		char f[50];
		char l[50];
	}n;
	char clg[50],branch[50];
	int eno,age,sem;
}s[50];

void main()
{
	int n,i;
	clrscr();
	printf("Enter No. of Students : ");
	scanf("%d",&n);

	clrscr();

	for(i=0;i<n;i++)
	{
		clrscr();

		printf("Student %d : \n\n",i+1);
		printf("Enter Full Name : ");
		scanf("%s",&s[i].n.f);
		scanf("%s",&s[i].n.l);
		printf("\nEnter Enrollment Name : ");
		scanf("%d",&s[i].eno);
		printf("\nEnter College Name :");
		scanf("%s",&s[i].clg);
		printf("\nEnter Branch : ");
		scanf("%s",&s[i].branch);
		printf("\nEnter Semester : ");
		scanf("%d",&s[i].sem);
		printf("\nEnter Age : ");
		scanf("%d",&s[i].age);
	}
	for(i=0;i<n;i++)
	{
		clrscr();

		printf("\tStudent %d :\n ",i+1);
		printf("\n\tName : %s %s",s[i].n.f,s[i].n.l);
		printf("\n\tEnrollment No. : %d",s[i].eno);
		printf("\n\tCollege Name : %s",s[i].clg);
		printf("\n\tBranch : %s",s[i].branch);
		printf("\n\tSemester : %d",s[i].sem);
		printf("\n\tEnter Age : %d",s[i].age);

		getch();
	}
	getch();
}