//W.A.C.P. to demonstrate strcture with pointer.
#include<stdio.h>
#include<conio.h>
struct num
{
	int one;
	int two;
}*p,s1;

void main()
{
	clrscr();
	p=&s1;
	printf("Enter 2 Numbers : ");
	scanf("%d %d",&(*p).one,&(*p).two);
	printf("\nAddition : %d",(*p).one+(*p).two);
	getch();
}