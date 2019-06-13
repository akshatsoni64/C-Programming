#include<stdio.h>
#include<conio.h>

struct stu
{
	struct name
	{
		char f[50],m[50],l[50];
	}name;

	struct dob
	{
		int d,m,y;
	}dt;

	int eno,sem;
	char branch[50];
}s[10];

void main()
{
	int i,n;

	clrscr();

	printf("Enter No. of Students : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		clrscr();

		printf("Enter %d Student Info : \n",i+1);
		printf("Enter your Fullname :\n");
		printf("FirstName : ");
		scanf("%s",&s[i].name.f);
		printf("MiddleName : ");
		scanf("%s",&s[i].name.m);
		printf("LastName : ");
		scanf("%s",&s[i].name.l);

		printf("\nEnter Enrollment No. :");
		scanf("%d",&s[i].eno);

		printf("\nEnter Semester : ");
		scanf("%d",&s[i].sem);

		printf("\nEnter Branch : ");
		scanf("%s",&s[i].branch);

		printf("\nEnter DOB(d>m>y) : ");
		scanf("%d",&s[i].dt.d);
		scanf("%d",&s[i].dt.m);
		scanf("%d",&s[i].dt.y);
	}

	clrscr();

	for(i=0;i<n;i++)
	{
		printf("\n\t\t\tStudent %d Info : \n\n",i+1);
		printf("\tName : %s %s %s\t",s[i].name.f,s[i].name.m,s[i].name.l);
		printf("Enrollment No. : %d\n",s[i].eno);
		printf("\tSemester : %d\t",s[i].sem);
		printf("Branch : %s\n",s[i].branch);
		printf("\tDOB : %d/%d/%d\n",s[i].dt.d,s[i].dt.m,s[i].dt.y);
		getch();
		clrscr();
	}
}