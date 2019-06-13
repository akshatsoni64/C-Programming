#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,len;
	char a[20];
	clrscr();
	printf("Enter String : ");
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]!=' ')
		{
			printf("%c",a[i]);
		}
		else
		{
			printf("\n");
		}
	}
	getch();
}