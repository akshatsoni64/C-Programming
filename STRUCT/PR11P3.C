/*W.A.C.P. to demonstrate structure by creating Marksheet*/
#include<stdio.h>
#include<conio.h>
#define total(x,y,z) (x+y+z)

float per(int x,int y,int z)
{
	float p;
	p=((x+y+z)*100)/150;
	return p;
}

struct stu
{
	struct name
	{
		char f[50];
		char l[50];
	}n;
	char branch[50];
	int eno,sem,m1,m2,m3;
}s[50];

void main()
{
	int n,i;
	float p;
	clrscr();
	printf("Enter No. of Students : ");
	scanf("%d",&n);

	clrscr();

	for(i=0;i<n;i++)
	{
		clrscr();

		printf("Student %d : \n",i+1);
		printf("Enter Full Name : ");
		scanf("%s",&s[i].n.f);
		scanf("%s",&s[i].n.l);
		printf("\nEnter Enrollment Name : ");
		scanf("%d",&s[i].eno);
		printf("\nEnter Branch : ");
		scanf("%s",&s[i].branch);
		printf("\nEnter Semester : ");
		scanf("%d",&s[i].sem);
		printf("Enter Marks of 3 Sujects : ");
		scanf("%d %d %d",&s[i].m1,&s[i].m2,&s[i].m3);

		getch();
	}
	for(i=0;i<n;i++)
	{
		clrscr();

		printf("Marksheet of Student %d : ",i+1);
		printf("\nName : %s %s",s[i].n.f,s[i].n.l);
		printf("\tEnrollment No. : %d",s[i].eno);
		printf("\nBranch : %s",s[i].branch);
		printf("\tSemester : %d",s[i].sem);
		printf("\nTotal Marks : %d",total(s[i].m1,s[i].m2,s[i].m3));
		p=per(s[i].m1,s[i].m2,s[i].m3);
		printf("\t\t %f%",p);

		getch();
	}
	getch();
}