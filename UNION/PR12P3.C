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

union stu
{
	struct name
	{
		char f[50];
		char l[50];
	}n;
	char branch[50];
	int eno,sem,m1,m2,m3;
}sf[50],sl[50],sb[50],se[50],ss[50],sm1[50],sm2[50],sm3[50];

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
		scanf("%s",&sf[i].n.f);
		scanf("%s",&sl[i].n.l);
		printf("\nEnter Enrollment Name : ");
		scanf("%d",&se[i].eno);
		printf("\nEnter Branch : ");
		scanf("%s",&sb[i].branch);
		printf("\nEnter Semester : ");
		scanf("%d",&ss[i].sem);
		printf("Enter Marks of 3 Sujects : ");
		scanf("%d %d %d",&sm1[i].m1,&sm2[i].m2,&sm3[i].m3);

		getch();
	}
	for(i=0;i<n;i++)
	{
		clrscr();

		printf("Marksheet of Student %d : ",i+1);
		printf("\nName : %s %s",sf[i].n.f,sl[i].n.l);
		printf("\tEnrollment No. : %d",se[i].eno);
		printf("\nBranch : %s",sb[i].branch);
		printf("\tSemester : %d",ss[i].sem);
		printf("\nTotal Marks : %d",total(sm1[i].m1,sm2[i].m2,sm3[i].m3));
		p=per(sm1[i].m1,sm2[i].m2,sm3[i].m3);
		printf("\t\t %f%",p);

		getch();
	}
	getch();
}