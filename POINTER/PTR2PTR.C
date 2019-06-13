//Write a C Program to demonstrate use of Pointer to Pointer
#include<stdio.h>
#include<conio.h>
void main()
{
	int a,*p1,**p2;
	clrscr();
	p1=&a;
	printf("Enter a Number : ");
	scanf("%d",p1);
	p1=&a;
	p2=&p1;
	printf("\n*p1 = %d\n\n",*p1);
	printf("**p2 = %d\n",**p2);
	getch();
}

