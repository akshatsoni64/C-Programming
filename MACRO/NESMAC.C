/*W.A.C.P. to demonstrate nested macro.*/
#include<stdio.h>
#include<conio.h>
#define cub(x) (x*x*x)
#define sqr(x) (x*x)
#define mul(x,y) (x*y)
#define equ(x,y) (cub(x)+cub(y)+mul(3,mul(sqr(x),y))+mul(3,mul(sqr(y),x)))

void main()
{
	clrscr();
	printf("(%d+%d)^3=%d",1,1,equ(1,1));
	getch();
}