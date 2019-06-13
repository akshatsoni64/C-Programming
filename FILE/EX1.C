#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	int a=10,r;

	clrscr();

	fp=fopen("FILE/FILE.txt","w");
	fprintf(fp,"%d",a);
	fclose(fp);

	fp=fopen("FILE/FILE.txt","r");
	if(fp==NULL)
	{
		printf("Error 404 : FILE NOT FOUND");
	}
	r=getw(fp);
	putw(r,stdout);
	fclose(fp);
	getch();
}