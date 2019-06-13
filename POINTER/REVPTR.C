// Write a C Program to Enter and Print Reverse of 1d Array using Pointers
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,sum=0;
	int *p;
	clrscr();
	printf("Enter 5 Numbers : ");
	p=&a[0];
	for(i=0;i<5;i++)
	{
	scanf("%d",p);
	p++;
	}
	printf("Reversed Array : \n");
	p=&a[4];
	for(i=0;i<5;i++)
	{
		printf("  %d\n",*p);
		p--;
	}
	getch();
	}

