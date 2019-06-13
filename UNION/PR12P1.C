//Main-AIM: Develop Programs using unions , union and structure.
//W.A.C.P. to demonstrate union by adding two numbers
#include<stdio.h>
#include<conio.h>
union num
{
	int one;
	int two;
}s1,s2;

void main()
{
	clrscr();
	printf("Enter two Numbers : ");
	scanf("%d %d",&s1.one,&s2.two);
	printf("\nAdd : %d",s1.one+s2.two);
	getch();
}