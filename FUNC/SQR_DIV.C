/*MAIN AIM : Write Programs to demonstrate use of Mathematical Functions.*/
/*Write a C Program to Test, Debug, and Execute following Mathematical Function
sqrt(),div()*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	clrscr();
	printf("\nsqrt(%d) = %lf\n\n",25,sqrt(25));
	printf("div(%d,%d) = %d\n\n",10,5,div(10,5));
	getch();
}