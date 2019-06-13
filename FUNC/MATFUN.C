/*Write a C Program to Test, Debug, and Execute following Mathematical Function
 pow(), ceil(), abs()*/
#include<stdio.h>
#include<conio.h>
#include<math.h>

void main()
{
	clrscr();
	printf("pow(%d,%d) = %lf\n\n",4,2,pow(4,2));
	printf("ceil(%lf) = %lf\n\n",5.768899,ceil(5.768899));
	printf("abs(%d) = %d\n\n",-10,abs(-10));
	getch();
}