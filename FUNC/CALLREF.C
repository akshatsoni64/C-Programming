//write a c program to calculate sum of array by function using pointer and demonstrate call by reference
#include<stdio.h>
#include<conio.h>

int sumarr(int a,int b)
{
	int i,sum=0;
	sum=b+a;
	return sum;
}

int sumpoin(int *a,int *n)
{
	int sum=0;
	sum=*a+*n;
	return sum;
}

void  main()
{
	int f=6,l=8;
	int m=8,n=6;
	clrscr();
	printf("Call by Value : \n");
	printf("\nSum=%d\n",sumarr(n,f));
	printf("\nCall by Reference\n");
	printf("\nSum=%d",sumpoin(&l,&m));
	getch();
}
