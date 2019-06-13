// write a cprogram to enter 1d and print sum of array using pointers
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
	sum=sum+(*p);
	p++;
	}
	p=&a[0];
	printf("Sum = %d\n",sum);
	getch();
}