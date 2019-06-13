//Main AIM - Develop Programs explaining the basic use of Functions and passing Function arguements
//-W.A.C.P. to calculate sqr and cube of a number using function
#include<stdio.h>
#include<conio.h>

int sqr(int x)
{
	int z;
	z=x*x;
	return z;
}
int cube(int p)
{
	int q;
	q=(p*p*p);
	return q;
}
void main()
{
	int a;
	clrscr();
	printf("Enter a Number : ");
	scanf("%d",&a);
	printf("Square : %d\n",sqr(a));
	printf("Cube : %d",cube(a));
	getch();
}