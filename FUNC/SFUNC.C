#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100]="Akshat Soni",b[100],c[100];
	int x=100;
	clrscr();
	sscanf(a,"%s",b);
	printf("%s\n\n",b);
	sprintf(c,"%s %s %d",a,b,x);
	printf("%s",c);
	getch();
}