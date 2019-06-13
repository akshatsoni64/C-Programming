/*Main AIM : Develop Programs using various features of structures*/
/*W.A.C.P. to demonstrate structure by adding 2 numbers*/
#include<stdio.h>
#include<conio.h>
2
struct add
{
	int a,b;
}n;

void main()
{
	clrscr();
	printf("Enter 2 Numbers : ");
	scanf("%d %d",&n.a,&n.b);
	printf("Add = %d",n.a+n.b);
	getch();
}
