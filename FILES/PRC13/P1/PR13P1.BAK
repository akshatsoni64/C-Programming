//W.A.C.P. to read from a file.
#include<stdio.h>
#include<conio.h>
#include<process.h>

void main()
{
	FILE *fp;
	char c;
	clrscr();
	fp=fopen("FILE.TXT","r");
	if(fp==NULL)
	{
		printf("Error 404 : File Not Found");
		exit(0);
	}
	while((c=fgetc(fp))!=EOF)
	{
		putchar(c);
	}
	fclose(fp);
	getch();
}