//W.A.C.P. to print Fibonacci series using Recursion
#include<stdio.h>
#include<conio.h>

void main()
{
	int a=0,b=1,n;
	clrscr();
	printf("Enter the Limit of Series : ");
	scanf("%d",&n);
	printf("\nFibonacci Series : \n\n");
	printf("%d\n%d",a,b);
	fib(a,b,n);
	getch();
}

int fib(int x,int y,int n)
{
	int i,c;
	i=x+y;
	printf("\n%d",i);
	n--;
	if(n>0)
	{
		fib(y,i,n);
	}
}