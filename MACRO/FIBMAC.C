#include<stdio.h>
#include<conio.h>
#define fib(x,y) (x+y)

void main()
{
	int x=0,y=1,n,i,t;
	clrscr();
	printf("Enter the Limit of Series : ");
	scanf("%d",&n);

	clrscr();

	printf("Fibonacci Series : \n");
	printf("%d\n",x);
	for(i=0;i<n;i++)
	{
		printf("%d\n",fib(x,y));
		t=fib(x,y);
		y=x;
		x=t;
	}
	getch();
}