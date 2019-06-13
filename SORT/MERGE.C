#include<stdio.h>
#include<conio.h>

void ms(int a[],int n);

void main()
{
	int i,n=5,a[5],c;

	clrscr();

	printf("Enter Array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	getch();
}