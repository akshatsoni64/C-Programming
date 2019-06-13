//W.A.C.P. to Calculate Factorial of a No. using Recursion :
#include<stdio.h>
#include<conio.h>

void main()
{
	int a;
	clrscr();
	printf("Enter A Number : ");
	scanf("%d",&a);
	printf("\nFactorial : %d",fac(a));
	getch();
}

int fac(int x)
{
	if(x!=1)
	{
		return (x*fac(x-1));
	}
}