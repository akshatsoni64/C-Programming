/*Write a C Program to print location of an Integer Array*/
#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,*p;
	clrscr();
	printf("Enter 5 Numbers : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	p=&a[0];
	printf("\nLocations of Numbers : \n");
	for(i=0;i<5;i++)
	{
		printf("%d = %u\n",*p,p);
		p++;
	}
	getch();
}