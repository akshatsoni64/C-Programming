/*Write a C Program to Test, Debug, and Execute following Mathematical Function
 sin(), cos(), tan()*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14286

void main()
{
	double a,tana;
	clrscr();
	a=0.5;
	tana=tan(a);
	printf("%lf",tana);
	getch();
}