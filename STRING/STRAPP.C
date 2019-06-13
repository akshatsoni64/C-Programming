#include<stdio.h>
#include<conio.h>

void main()
{
	int i,len=0;
	char a[10],b[10];
	clrscr();
	printf("Enter 2 Strings : ");
	gets(a);
	gets(b);

	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}

	for(i=0;b[i]!='\0';i++)
	{
		a[len]=b[i];
		len++;
	}
	printf("\n%s",a);

	getch();
}