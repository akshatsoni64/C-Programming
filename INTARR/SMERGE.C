//C Program to Merge 2 Strings using sprintf()
#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100],b[100],c[100];
	clrscr();
	printf("Enter 2 Strings : ");
	gets(a);
	gets(b);
	sprintf(c,"%s %s",a,b);
	printf("%s",c);
	getch();
}