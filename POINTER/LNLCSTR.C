// Write a C Program to calculate and print Length and Locations of String using Pointers
#include<stdio.h>
#include<conio.h>
void main()
{
	int i,flag=0;
	char a[50],*ptr;
	clrscr();
	printf("Enter String : ");
	gets(a);
	ptr=&a[0];
	for(i=0;a[i]!='\0';i++)
	{
		flag++;
		printf("\n%c = %u",*ptr,ptr);
		ptr++;

	}
	printf("\n\nLength of String = %d",flag++);
	getch();
}