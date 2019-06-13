#include<stdio.h>
#include<conio.h>
#include<process.h>

void main()
{
	FILE *fp;
	char c;
	clrscr();
	fp=fopen("FILES/PRC14/FILE2.TXT","r");
	if(fp==NULL)
	{
		printf("ERROR 404");
	}
	fseek(fp,11,0);
	while((c=getc(fp))!=EOF)
	{
		putchar(c);
	}
	fclose(fp);
	getch();
}