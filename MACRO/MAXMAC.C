#include<stdio.h>
#include<conio.h>
#define max(x,y) ((x>y)?x:y)
void main()
{
	int a,b;
	clrscr();
	printf("Enter 2 Numbers : ");
	scanf("%d %d",&a,&b);
	printf("Max : %d",max(a,b));
	getch();
}