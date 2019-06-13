#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,len=0;
	char a[10],rev[10];
	clrscr();
	printf("Enter String : ");
	gets(a);

	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}

	for(i=0,j=len-1;i<len,j>=0;i++,j--)
	{
		rev[j]=a[i];
	}
	for(i=0;i<len;i++)
	{
		printf("%c",rev[i]);
	}
	getch();
}