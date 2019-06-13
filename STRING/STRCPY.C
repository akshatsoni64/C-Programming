#include<stdio.h>
#include<conio.h>

void main()
{
	int i,len=0;
	char a[30],b[30];
	clrscr();
	printf("Enter a String : ");
	gets(a);

	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}

	for(i=0;i<len;i++)
	{
		b[i]=a[i];
	}
	printf("\nCopied String : \n");
	for(i=0;i<len;i++)
	{
		printf("%c\n",b[i]);
	}

	getch();
}