#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int i,count=0,len;
	char a[20];
	clrscr();
	printf("Enter String : ");
	gets(a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]==' ')
		{
			count++;
		}
	}
	printf("Blank Spaces : %d",count);
	getch();
}