//W.A.C.P. to store and display Student Info in file using structure.
#include<stdio.h>
#include<conio.h>
#include<process.h>

struct student
{
	char name[50];
	int sem;
	int eno;
}s1[10];

void main()
{
	FILE *fp;
	int n,i;
	clrscr();
	printf("Enter the No. of Students Entered : ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		clrscr();
		printf("Student %d : \n",i+1);
		printf("\nName : ");
		scanf("%s",&s1[i].name);
		printf("\nSem : ");
		scanf("%d",&s1[i].sem);
		printf("\Enrollment No. : ");
		scanf("%d",&s1[i].eno);
	}
	fp=fopen("FILES/PRC13/P3/STUINFO.txt","w");
	if(fp=='\0')
	{
		clrscr();
		printf("\n\n\t\tFile Doesn't Exist");
	}
	for(i=0;i<n;i++)
	{
		fprintf(fp,"Student %d :\n",i+1);
		fprintf(fp,"\nName: %s \nSem : %d \nEnrollment No. : %d\n\n",s1[i].name,s1[i].sem,s1[i].eno);
	}
	getch();
}


