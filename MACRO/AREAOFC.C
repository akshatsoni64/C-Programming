/*W.A.C.P. to calculate area of Circle using macro*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
void main()
{
	int r;
	clrscr();
	printf("Enter the Radius : ");
	scanf("%d",&r);
	printf("%f",PI*r*r);
	getch();
}
