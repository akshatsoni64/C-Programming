/* W.A.C.P. to demonstrate structure by creating student info (name,branch,eno,sem,age)*/
#include<stdio.h>
#include<conio.h>

union stu
{
	union name
	{
		char f[50];
		char l[50];
	}f,l;
	char clg[50],branch[50];
	int eno,age,sem;
}sf[50],sl[50],sc[50],sb[50],se[50],sa[50],ss[50];

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
		scanf("%s",&sf[i].f.f);
		scanf("%s",&sl[i].l.l);
		printf("\nEnrollment No. : ");
		scanf("%d",&se[i].eno);
		printf("\nCollege Name :");
		scanf("%s",&sc[i].clg);
		printf("\nBranch : ");
		scanf("%s",&sb[i].branch);
		printf("\nSemester : ");
		scanf("%d",&ss[i].sem);
		printf("\nAge : ");
		scanf("%d",&sa[i].age);
	}
	for(i=0;i<n;i++)
	{
		clrscr();

		printf("\tStudent %d :\n ",i+1);
		printf("\n\tName : %s %s",sf[i].f.f,sl[i].l.l);
		printf("\n\tEnrollment No. : %d",se[i].eno);
		printf("\n\tCollege Name : %s",sc[i].clg);
		printf("\n\tBranch : %s",sb[i].branch);
		printf("\n\tSemester : %d",ss[i].sem);
		printf("\n\tAge : %d",sa[i].age);

		getch();
	}
	getch();
}