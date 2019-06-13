#include<stdio.h>
#include<conio.h>

void main()
{
	int i,count=0;
	char a[50];

	clrscr();

	printf("Enter String : ");
	gets(a);

	for(i=0;a[i]!='\0';i++)
	{
		count++;
	}

	printf("\n\nLength of String = %d",count);
	getch();
}